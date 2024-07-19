#include <vector>
#include <string>
#include <cassert>

std::string concatenate(const std::vector<std::string>& input_strings) {
    std::string result;
    for (const std::string& s : input_strings) {
        result += s;
    }
    return result;
}

int main();