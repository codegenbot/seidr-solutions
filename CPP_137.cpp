#include <string>
template<typename T1, typename T2>
auto compare_one(T1 a, T2 b) {
    if (a > b) {
        return a;
    } else if (b > a) {
        return b;
    } else {
        return "None";
    }
}