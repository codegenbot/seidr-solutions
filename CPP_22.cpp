#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <variant>
#include <cassert>

using namespace std;

vector<int> filter_integers(list<variant<int, string>> values) {
    vector<int> result; // Initialize with empty vector
    for (const auto& value : values) {
        if (holds_alternative<int, string>(value)) {
            int val = get<int>(value);
            if(find(result.begin(), result.end(), val) == result.end())
                result.push_back(val);
        }
    }
    return result;
}

bool is_same(vector<int> a, vector<int> b) {
    return (a.size() == b.size()) && equal(a.begin(), a.end(), b.begin());
}

int main_func() {
    list<variant<int, string>> values = {'a', 'b'}; // Assuming you want to include non-integer elements
    values.insert(values.end(), 3);
    values.insert(values.end(), int(3));
    values.insert(values.end(), 3);
    assert(is_same(filter_integers(values), vector<int>(3, 3)));
    return 0;
}