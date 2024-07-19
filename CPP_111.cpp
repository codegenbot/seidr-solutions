#include <map>
#include <string>

bool issame(std::map<char, int> a, std::map<char, int> b) {
    if (a.size() != b.size()) return false;
    for (auto p : a) {
        if (b.find(p.first) == b.end() || p.second != b[p.first]) {
            return false;
        }
    }
    return true;
}

std::map<char, int> histogramTest(std::string str) {
    std::map<char, int> result = {};
    for (char c : str) {
        if (result.find(c) == result.end()) {
            result[c] = 1;
        } else {
            result[c]++;
        }
    }
    return result;
}

int main() {
    std::string test;
    std::cout << "Enter a string: ";
    std::cin >> test;

    auto hist = histogramTest(test); 

    for (auto p : hist) {
        std::cout << p.first << ": " << p.second << std::endl;
    }

    if (!issame(hist, {{'a', 1}})) {
        assert(false);
    }
    
    return 0;
}