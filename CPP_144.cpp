#include <string>

bool simplify(std::string str1, std::string str2) {
    size_t first1 = str1.find_first_not_of(" \t");
    size_t last1 = str1.find_last_not_of(" \t");
    size_t first2 = str2.find_first_not_of(" \t");
    size_t last2 = str2.find_last_not_of(" \t");

    if (first1 == std::string::npos || first2 == std::string::npos) {
        return false;
    }

    return str1.substr(first1, last1 - first1 + 1) == str2.substr(first2, last2 - first2 + 1);
}