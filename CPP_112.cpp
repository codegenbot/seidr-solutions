#include <string>
#include <vector>
#include <algorithm>

bool issame(const std::string& s1, const std::string& s2) {
    return s1 == s2;
}

void reverse_delete(const std::string& s) {
    std::string result;
    std::vector<char> c = {'a', 'e', 'i', 'o', 'u'};
    for (char ch : s) {
        if (std::find(c.begin(), c.end(), ch) == c.end()) {
            result += ch;
        }
    }
    std::string result_reversed = result;
    std::reverse(result_reversed.begin(), result_reversed.end());
    return {result, issame(result, result_reversed) ? "True" : "False"};
}