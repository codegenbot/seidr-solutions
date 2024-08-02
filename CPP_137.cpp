#include <any>
#include <string>
#include <vector>

using namespace std;

any compare_one(any a, any b) {
    if (any_cast<double>(a) && any_cast<double>(b)) {
        return (any_cast<double>(a) > any_cast<double>(b)) ? a : ((any_cast<double>(a) == any_cast<double>(b))) ? any("None") : b;
    } else if (any_cast<string>(a) && any_cast<string>(b)) {
        return (stod(any_cast<string>(a).c_str()) > stod(any_cast<string>(b).c_str())) ? a : ((stod(any_cast<string>(a).c_str()) == stod(any_cast<string>(b).c_str()))) ? any("None") : b;
    } else {
        return "Invalid input type";
    }
}