```cpp
#include <iostream>
#include <map>
#include <string>

// Function to calculate the histogram
std::map<char, int> histogram(std::string str) {
    std::map<char, int> result;
    for (char c : str) {
        if (result.find(c) == result.end())
            result[c] = 1;
        else
            result[c]++;
    }
    return result;
}

// Function to compare two maps
bool issame(std::map<std::pair<char, int>, std::map<char, int>> a, std::map<char, int> b) {
    if (a.size() != b.size())
        return false;

    for (auto it = a.begin(); it != a.end(); ++it) {
        if (b.find(it->first.second) == b.end())
            return false;
    }

    return true;
}

int main() {
    std::string str = "abc";
    std::map<std::pair<char, int>, std::map<char, int>> histogram = {{'a', 1}, {'b', 2}, {'c', 3}};
    bool same = issame(histogram, histogram(str));
    std::cout << (same ? "True" : "False") << std::endl;

    return 0;
}