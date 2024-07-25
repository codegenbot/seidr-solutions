#include <any>

namespace std {

    using namespace std;

    any a;
    any b;

    if (any_cast<int>(a) > any_cast<int>(b)) {
        return a;
    } else if (any_cast<int>(a) < any_cast<int>(b)) {
        return b;
    } else {
        return a;
    }
}