#include <any>
#include <string>
#include <algorithm>

using namespace std;

any compare_one(any a, any b) {
    if (any_cast<int>(a) > any_cast<float>(b)) {
        return b;
    }
    else if (any_cast<int>(a) > stoi(any_cast<string>(b).substr(1))) {
        return b;
    }
    else if (stoi(any_cast<string>(a).substr(1)) > any_cast<int>(b)) {
        return a;
    }
    else if (any_cast<string>(a) > any_cast<string>(b)) {
        return a;
    }
    else if (any_cast<float>(a) > any_cast<int>(b)) {
        return a;
    }
    else if (stoi(any_cast<string>(b).substr(1)) > any_cast<float>(a)) {
        return b;
    }
    else {
        return "None";
    }
}