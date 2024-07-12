```cpp
#include <boost/any.hpp>

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> filter_integers(vector<boost::any> values) {
    vector<int> result;
    for (const auto& value : values) {
        int val = boost::any_cast<int>(value);
        if (val != 0) { // handle non-integer cases
            result.push_back(val == 0 ? 0 : val); // convert characters to 0
        }
    }
    return result;
}

int main() {
    assert(issame(filter_integers({3, 'c', 3, 3, 'a', 'b'}), {3, 3, 3}));
    return 0;
}