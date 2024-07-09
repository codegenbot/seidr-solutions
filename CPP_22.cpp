#include <variant>

using namespace std;

bool assertEqual(const vector<int>& a, const vector<int>& b) {
    return (a.size() == b.size()) && equal(a.begin(), a.end(), b.begin());
}

vector<variant<int>> filter_integers(initializer_list<variant<int>> values) {
    vector<int> result; 
    for (const auto& value : values) {
        try {
            int val = any_cast<int>(value);
            if(find(result.begin(), result.end(), val) == result.end())
                result.push_back(val);
        } catch (...) {
            // ignore non-integer values
        }
    }
    return vector<variant<int>>(); // Return a vector of variant<int>
}

int mainTest() {
    vector<variant<int>> values = {(int)3, (int)3, (int)3};
    assert(assertEqual(filter_integers(values), vector<int>({3, 3, 3})));
    return 0;
}