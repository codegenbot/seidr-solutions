#include <any>
if (a.type() == typeid(int) && b.type() == typeid(int)) {
    if (any_cast<int>(a) > any_cast<int>(b)) {
        return a;
    } else if (any_cast<int>(a) < any_cast<int>(b)) {
        return b;
    }
} else if (a.type() == typeid(float) && b.type() == typeid(float)) {
    if (any_cast<float>(a) > any_cast<float>(b)) {
        return a;
    } else if (any_cast<float>(a) < any_cast<float>(b)) {
        return b;
    }
} else if (a.type() == typeid(string) && b.type() == typeid(string)) {
    float val1 = stof(any_cast<string>(a));
    float val2 = stof(any_cast<string>(b));
    if (val1 > val2) {
        return a;
    } else if (val1 < val2) {
        return b;
    }
}
return any();