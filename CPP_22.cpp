#include <iostream>
#include <vector>
#include <variant>
#include <cassert>
#include <initializer_list>
#include <algorithm>
#include <any>

using namespace std;

bool assertEqual(const vector<int>& a, const vector<int>& b) {
    return (a.size() == b.size()) && equal(a.begin(), a.end(), b.begin());
}

vector<int> filter_integers(initializer_list<variant<int>> values) {
    vector<int> result; 
    for (const auto& value : values) {
        try {
            int val = any_cast<int>(std::visit(std::overload<int>([](auto v){ return std::get<int>(v); }), value));
            if(find(result.begin(), result.end(), val) == result.end())
                result.push_back(val);
        } catch (...) {
            // ignore non-integer values
        }
    }
    return result;
}

int mainTest() {
    vector<variant<int>> values({1}, {2}, {3});
    assert(assertEqual(filter_integers(values), vector<int>({1, 2, 3})));
    return 0;
}