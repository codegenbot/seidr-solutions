#include <string>
#include <vector>
#include <any>

using namespace std;

any compare_one(any a, any b) {
    if (any_cast<int>(a) > any_cast<int>(b)) {
        return a;
    } else if (any_cast<int>(a) < any_cast<int>(b)) {
        return b;
    } else if (any_cast<string>(a) > any_cast<string>(b)) {
        return a;
    } else if (any_cast<string>(a) < any_cast<string>(b)) {
        return b;
    } else if (stod(any_cast<string>(a)) > stod(any_cast<string>(b))) {
        return a;
    } else {
        return boost::any("None");
    }
}