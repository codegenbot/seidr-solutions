#include <any>
#include <string>

using namespace std;

any compare(any a, any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return (any_cast<int>(a) >= any_cast<int>(b)) ? a : b;
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        return (any_cast<float>(a) >= any_cast<float>(b)) ? a : b;
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        return (stof(any_cast<string>(a)) >= stof(any_cast<string>(b))) ? a : b;
    }

    return a; // Handle other types, return the first argument by default
}