#include <string>
#include <algorithm>

using namespace std;

any compare_one(any a, any b) {
    if (any_cast<int>(a) > any_cast<float>(b)) {
        return a;
    }
    else if (any_cast<float>(a) > any_cast<int>(b)) {
        return a;
    }
    else if (any_cast<string>(a) > to_string(any_cast<int>(b))) {
        return a;
    }
    else if (any_cast<string>(a) > to_string(any_cast<float>(b))) {
        return a;
    }
    else if (stoi(any_cast<string>(a)) > any_cast<int>(b)) {
        return a;
    }
    else if (stoi(any_cast<string>(a)) > any_cast<float>(b)) {
        return a;
    }
    else if (any_cast<int>(a) == any_cast<int>(b)) {
        return "None";
    }
    else if (any_cast<float>(a) == any_cast<float>(b)) {
        return "None";
    }
    else if (stoi(any_cast<string>(a)) == any_cast<int>(b)) {
        return "None";
    }
    else if (stof(any_cast<string>(a)) == any_cast<float>(b)) {
        return "None";
    }
    else {
        return a;
    }
}