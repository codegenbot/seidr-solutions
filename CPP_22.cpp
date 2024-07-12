#include <boost/any.hpp>
#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> filter_integers(std::vector<boost::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        int val = boost::any_cast<int>(value);
        if (val != 0) { 
            result.push_back(val);
        } else if (!boost::any_cast<bool>(value)) { // handle non-integer cases
            result.push_back(0);
        }
    }
    return result;
}

int main() {
    assert(issame(filter_integers({3, 'c', 3, 3, 'a', 'b'}), {3, 3, 3}));
    return 0;
}