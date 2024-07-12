```cpp
#include <iostream>
#include <unordered_map>

bool issame(std::unordered_map<char, int> m1, std::unordered_map<char, int> m2) {
    if (m1.size() != m2.size()) return false;
    for (auto it = m1.begin(); it != m1.end(); ++it) {
        if (m2.find(it->first) == m2.end() || m2[it->first] != it->second) return false;
    }
    return true;
}

std::unordered_map<char, int> histogram(std::string s) {
    std::unordered_map<char, int> hist;
    for (char c : s) {
        if (hist.find(c) == hist.end()) hist[c] = 1;
        else hist[c]++;
    }
    return hist;
}

int main() {
    std::string str;
    std::cout << "Enter a string: ";
    std::cin >> str;

    std::unordered_map<char, int> h = histogram(str);
    for (auto it = h.begin(); it != h.end(); ++it) {
        std::cout << it->first << ": " << it->second << "\n";
    }

    return 0;
}