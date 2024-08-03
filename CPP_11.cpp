#include <string>
#include <cassert>

std::string solve(const std::string& a, const std::string& b) {
    std::string result = "";
    assert(a.size() == b.size());
    for (int i = 0; i < a.size(); i++) {
        if (a[i] == b[i]) {
            result += "0";
        } else {
            result += "1";
        }
    }
    return result;
}