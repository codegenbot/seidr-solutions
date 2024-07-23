```cpp
#include <iostream>
#include <map>
#include <string>

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

bool issame(map<pair<char, int>, map<char, int>> a, map<char, int> b) {
    if (a.size() != b.size())
        return false;
    
    for (auto it = a.begin(); it != a.end(); ++it) {
        if (b.find(it->second) == b.end())
            return false;
    }
    
    return true;
}

int main() {
    std::string str = "abc";
    map<pair<char, int>, map<char, int>> histogram = histogram(str);
    bool same = issame(histogram, {{'a', 1}, {'b', 2}, {'c', 3}});
    std::cout << (same ? "True" : "False") << std::endl;
    
    return 0;
}