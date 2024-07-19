#include <boost/any.hpp>
#include <algorithm>
#include <string>

int compare_strings(const std::string& a, const std::string& b) {
    for (size_t i = 0; i < a.size() && i < b.size(); ++i) {
        if (compare_one(a[i], b[i]) > 0)
            return 1;
        else if (compare_one(a[i], b[i]) < 0)
            return -1;
    }
    if (a.size() > b.size())
        return 1;
    else if (a.size() < b.size())
        return -1;
    return 0;
}

int compare_one(char a, char b) {
    if (a > b)
        return 1;
    else if (b > a)
        return -1;
    else
        return 0;
}