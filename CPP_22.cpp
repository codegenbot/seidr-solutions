#include <boost/any.hpp>
#include <vector>

bool issame(const std::vector<boost::any>& a, const std::vector<boost::any>& b) {
    if (a.size() != b.size()) return false;
    for (size_t i = 0; i < a.size(); ++i) {
        if (!boost::any_cast<int>(a[i]).good() || !boost::any_cast<int>(b[i]).good() ||
            boost::any_cast<int>(a[i]).get() != boost::any_cast<int>(b[i]).get()) return false;
    }
    return true;
}

std::vector<int> filter_integers(std::vector<boost::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (boost::any_cast<int>(value).good()) {
            result.push_back(boost::any_cast<int>(value).get());
        }
    }
    return result;
}

int main() {
    std::vector<boost::any> values = {3, boost::any(), 3, 3, boost::any(), 'a', 'b'};
    std::vector<int> result = filter_integers(values);
    assert(issame(result, std::vector<int>({3, 3, 3})));
    return 0;
}