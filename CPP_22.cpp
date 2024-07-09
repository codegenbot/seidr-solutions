#include <boost/any.hpp>
#include <vector>

bool issame(std::vector<boost::any> a, std::vector<boost::any> b) {
    if (a.size() != b.size())
        return false;
    for (size_t i = 0; i < a.size(); i++) {
        if (!boost::any_cast<bool>(a[i]) || !boost::any_cast<bool>(b[i]))
            continue;
        if (boost::any_cast<int>(a[i]) != boost::any_cast<int>(b[i]))
            return false;
    }
    return true;
}

std::vector<int> filter_integers(std::vector<boost::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (boost::any_cast<bool>(value)) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}

int main() {
    assert(issame(filter_integers({3, boost::any(true), 3, 3, boost::any(true), boost::any(false)}), {3, 3, 3}));
    return 0;
}