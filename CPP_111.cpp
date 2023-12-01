#include <map>

std::map<char, int> histogram(std::string test) {
    std::map<char, int> result;
    for (char c : test) {
        if (c != ' ') {
            result[c]++;
        }
    }
    return result;
}