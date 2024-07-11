```cpp
#include <boost/variant.hpp>

using namespace std;
namespace boost {
    namespace variant {
        template<typename T>
        struct recursive_wrapper;

        template<>
        struct recursive_wrapper<void> {
            using type = void;
        };

        template<typename T>
        struct recursive_wrapper<recursive_wrapper<T>> {
            using type = recursive_wrapper<T>;
        };
    }
}

boost::any compare_one(boost::any a, boost::any b) {
    if (holds_alternative<int>(a) && holds_alternative<double>(b)) {
        return get<int>(a) > get<double>(b) ? a : b;
    }
    else if (holds_alternative<int>(b) && holds_alternative<double>(a)) {
        return get<int>(b) < get<double>(a) ? a : b;
    }
    else {
        boost::any result = a;
        while(holds_alternative<boost::variant::void_(boost::recursive_wrapper<boost::variant::recursive_wrapper<void>>>)>(result))
            result = recursive_get(result, 0);
        return result;
    }
}

template<typename T>
T recursive_get(boost::any &a, int level) {
    if(level % 2 == 1) {
        boost::any temp;
        boost::get<boost::variant>(a).visit([&](boost::variant<int, double> &v){
            if(get_which(v) == 0) {
                temp = boost::any(static_cast<int>(get<int>(v)));
            }
            else {
                temp = boost::any(static_cast<double>(get<double>(v)));
            }
        });
        a = temp;
    }
    return boost::get<T>(a);
}