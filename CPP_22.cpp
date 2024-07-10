#include <vector>
#include <list>

namespace boost {
    template<typename T>
    struct any_cast {
        static T cast(const any& a) {
            if (!a.type()) {
                throw bad_any_cast();
            }
            return T(any_cast<T>::from_any(a));
        }
    };
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> filter_integers(std::list<boost::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (boost::any_cast<int>(value)) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}