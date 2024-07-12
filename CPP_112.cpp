#include <vector>
#include <string>
#include <algorithm>

std::vector<std::string> reverse_delete(std::string s, std::string c) {
    std::string result = "";
    for (char ch : s) {
        bool found = false;
        for (char cc : c) {
            if (ch == cc) {
                found = true;
                break;
            }
        }
        if (!found) {
            result += ch;
        }
    }
    std::string rev = result;
    std::reverse(rev.begin(), rev.end());
    return {result, (result == rev ? "True" : "False")};
}