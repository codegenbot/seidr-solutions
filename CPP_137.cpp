#include <any>
#include <string>
#include <algorithm>

using namespace std;

std::any compare_one(std::any a, std::any b) {
    if (any_cast<int>(a) > any_cast<float>(b)) {
        return b;
    }
    else if (any_cast<int>(a) < any_cast<int>(b)) {
        return b;
    }
    else if (any_cast<string>(a).find(',') != string::npos && 
             any_cast<string>(b).find(',') == string::npos) {
        return a;
    }
    else if (any_cast<string>(a).find(',') == string::npos && 
             any_cast<string>(b).find(',') != string::npos) {
        return b;
    }
    else if (any_cast<string>(a) > any_cast<string>(b)) {
        return b;
    }
    else if (any_cast<string>(a) < any_cast<string>(b)) {
        return a;
    }
    else {
        return "None";
    }
}