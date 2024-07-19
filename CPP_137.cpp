#include <any>
#include <string>
#include <iostream>

using namespace std;

any compare_one(any a, any b) {
    if (any_cast<double>(a) > any_cast<double>(b)) {
        return a;
    } else if (any_cast<double>(a) < any_cast<double>(b)) {
        return b;
    } else {
        return "None";
    }
}