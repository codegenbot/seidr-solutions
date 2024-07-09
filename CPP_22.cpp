#include <vector>
#include <list>
#include <any>
#include <boost/any.hpp>

namespace boost { namespace result_of {
template<>
struct any_cast<int>(std::any) {
    explicit any_cast(std::any const& a) : a_(a) {}

    operator int() const {
        if (!a_) return 0;
        try {
            return std::any_cast<int>(a_);
        } catch (...) {
            return 0;
        }
    }

private:
    std::any a_;
};
}

namespace boost { namespace type_traits {

template<typename T>
struct is_same : public std::false_type {};

templatetypename T1, typename T2>
struct is_same<T1, T2> : public std::is_same<T1,T2> {};

} } // namespace boost

std::vector<int> filter_integers(std::list<std::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (boost::any_cast<int>(value)) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}

int main() {
    assert(std::is_same<decltype(filter_integers({3, 'c', 3, 3, 'a', 'b'})), std::vector<int>>::value);
    // ...
}