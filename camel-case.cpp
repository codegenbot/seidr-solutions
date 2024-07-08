```c++
#include <string>
#include <sstream>
#include <vector>

std::string camelCase(const std::string& s) {
    std::stringstream ss(s);
    std::string word;
    std::string result;

    while (ss >> word) {
        if (!result.empty()) {
            result[0] = toupper(result[0]);
        }
        for (char c : word) {
            result += tolower(c);
        }
    }

    return result;
}