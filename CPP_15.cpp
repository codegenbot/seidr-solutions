#include <string>

std::string generateSequence(int n) {
    std::string result = "";
    for (int i = 0; i < n; ++i) {
        result += std::to_string(i) + " ";
    }
    result.pop_back(); // remove the extra space at the end
    return result;
}