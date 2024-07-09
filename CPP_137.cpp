#include <any>

using namespace std;

any compare_one(any a, any b) {
    if (get<int>(a) > get<int>(b)) {
        return b;
    }
    if (get<int>(a) < get<int>(b)) {
        return a;
    }

    if (get<float>(a) > get<float>(b)) {
        return b;
    }
    if (get<float>(a) < get<float>(b)) {
        return a;
    }

    if (get<double>(a) > get<double>(b)) {
        return b;
    }
    if (get<double>(a) < get<double>(b)) {
        return a;
    }

    if (get<string>(a) > get<string>(b)) {
        return get<string>(a) > get<string>(b) ? a : b;
    }
    if (get<string>(a) < get<string>(b)) {
        return a;
    }
    if (get<string>(a) == get<string>(b)) {
        return a;
    }

    return a;
}