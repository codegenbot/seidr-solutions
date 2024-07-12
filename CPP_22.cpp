#include <boost/any.hpp>
#include <vector>

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> filter_integers(vector<boost::any> values) {
    vector<int> result;
    for (const auto& value : values) {
        int val = boost::any_cast<int>(value);
        if (!boost::blank(&val)) { // handle non-integer cases
            result.push_back(val);
        }
    }
    return result;
}

int main() {
    assert(issame(filter_integers({3, 'c', 3, 3, 'a', 'b'}), vector<int>{3, 3, 3}));
    return 0;
}