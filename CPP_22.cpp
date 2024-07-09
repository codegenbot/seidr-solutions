#include <vector>
#include <list>
#include <any>
#include <algorithm>

namespace std {
    template<typename T1, typename T2>
    struct is_same : public integral_constant<bool, (is_same_helper<T1, T2>::value)> {};
}

template<typename T> struct is_same_helper;
template<typename T> struct is_same_helper<T, T> { enum { value = 1 }; };

vector<int> filter_integers(list<any> values) {
    vector<int> result;
    for (const auto& value : values) {
        if (boost::any_cast<int>(value)) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}

int main() {
    assert(is_same<decltype(filter_integers({3, 'c', 3, 3, 'a', 'b'})), vector<int>>::value);
    // ...
}