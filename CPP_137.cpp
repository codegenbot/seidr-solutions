```cpp
#include <any>

using namespace std;

any compare_one(any a, any b) {
    if (holds_alternative<int, float, double>(a) &&
        holds_alternative<string>(b)) {
        if (get<int>(a) > stod(get<string>(b))) {
            return b;
        }
    }
    if (holds_alternative<string>(a) &&
        holds_alternative<int, float, double>(b)) {
        if (stoi(get<string>(a)) > get<int>(b)) {
            return b;
        } else if (stod(get<string>(a)) > get<float>(b)) {
            return b;
        } else if (stod(get<string>(a)) > get<double>(b)) {
            return b;
        }
    }
    return a;
}