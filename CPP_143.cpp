#include <vector>
#include <string>
#include <sstream>

std::vector<std::string> split(const std::string& sentence) {
    std::istringstream iss(sentence);
    std::vector<std::string> result;

    for (std::string s; iss >> s;) {
        result.push_back(s);
    }

    return result;
}