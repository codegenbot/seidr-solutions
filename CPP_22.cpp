#include <vector>
#include <cassert>
#include <initializer_list>
#include <algorithm>
#include <variant>

using namespace std;

bool vector_equal(const vector<int>& a, const vector<int>& b) {
    return (a.size() == b.size()) && equal(a.begin(), a.end(), b.begin());
}

vector<int> filter_integers(initializer_list<variant<int,string>> values) {
    vector<int> result; 
    for (const auto& value : values) {
        try {
            if (holds_alternative<int>(value)) {
                int val = get<int>(value);
                if(find(result.begin(), result.end(), val) == result.end())
                    result.push_back(val);
            }
        } catch (...) {
            // ignore non-integer values
        }
    }
    return result;
}

int mainTest() {
    vector<variant<int,string>> values = {(int)3, (int)3, (int)3};
    assert(vector_equal(filter_integers(values), vector<int>({3, 3, 3})));
    return 0;
}