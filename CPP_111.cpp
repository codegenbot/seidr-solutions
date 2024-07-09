#include <map>

std::map<char, int> histogram(std::string str) {
    std::map<char, int> hist;
    for (char c : str) {
        hist[c]++;
    }
    return hist;
}