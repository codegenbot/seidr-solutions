#include <iostream>
#include <string>

using namespace std;

any compare_one(any a, any b) {
    if (any_cast<int>(a) < any_cast<float>(b)) {
        return b;
    }
    else if (any_cast<float>(a) > atof(any_cast<string>(b).c_str())) {
        return a;
    }
    else if (any_cast<string>(a) > any_cast<string>(b)) {
        return a;
    }
    else if (any_cast<int>(a) < any_cast<int>(b)) {
        return b;
    }
    else if (atof(any_cast<string>(a).c_str()) > any_cast<float>(b)) {
        return a;
    }
    else {
        return "None";
    }
}