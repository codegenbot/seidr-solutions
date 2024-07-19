#include <iostream>
#include <map>
#include <string>

std::map<char, int> histogramTest(const std::string& str) {
    std::map<char, int> hist;
    for (char c : str) {
        if (hist.count(c)) {
            hist[c]++;
        } else {
            hist[c] = 1;
        }
    }
    return hist;
}

bool issame(const std::map<char, int>& a, const std::map<char, int>& b) {
    if (a.size() != b.size()) return false;
    for (const auto& p : a) {
        if (!b.count(p.first) || b.at(p.first) != p.second) return false;
    }
    return true;
}

int main() {
    std::string test;
    std::cout << "Enter a string: ";
    using namespace std;
    std::cin >> test;

    auto hist = histogramTest(test); 

    for (auto p : hist) {
        cout << p.first << ": " << p.second << endl;
    }

    if (!issame(hist, {{'a', 1}})) { 
        return 0; 
    }
    
    return 0;
}