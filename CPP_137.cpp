#include <boost/any.hpp>
#include <string>

using namespace std;

int compare_one(any a, any b) {
    if (any_cast<int>(a) < any_cast<int>(b)) {
        return -1;
    } else if (any_cast<int>(a) > any_cast<int>(b)) {
        return 1;
    }
    if (any_cast<double>(a) < any_cast<double>(b)) {
        return -1;
    } else if (any_cast<double>(a) > any_cast<double>(b)) {
        return 1;
    }
    if (any_cast<string>(a) < any_cast<string>(b)) {
        return -1;
    } else if (any_cast<string>(a) > any_cast<string>(b)) {
        return 1;
    }
    return 0;
}