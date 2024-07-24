#include <boost/any.hpp>
#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> filter_integers(list_any values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (boost::any_cast<int>(value).type()) {
            bool same = true;
            for (int i = 0; i < boost::any_cast<int>(value); ++i) {
                same &= issame({i}, {result.back()});
            }
            if (same) {
                result.push_back(boost::any_cast<int>(value));
            }
        }
    }
    return result;
}