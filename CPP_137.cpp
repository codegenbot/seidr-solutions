#include <string>
#include <algorithm>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (any_cast<int>(a) && any_cast<float>(b)) {
        return b;
    } else if (any_cast<float>(a) && any_cast<string>(b)) {
        return max(to_string(any_cast<float>(a)), b);
    } else if (any_cast<int>(a) && any_cast<string>(b)) {
        return b;
    } else if (any_cast<float>(a) && any_cast<int>(b)) {
        return a < b ? a : b;
    } else if (any_cast<string>(a) && any_cast<string>(b)) {
        return max(a, b);
    }
    return "None";
}