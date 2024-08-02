#include <map>
#include <cassert>

bool issame(std::map<char, int> a, std::map<char, int> b) {
    if (a.size() != b.size()) {
        return false;
    }

    for (const auto &pair : a) {
        if (b.find(pair.first) == b.end() || b[pair.first] != pair.second) {
            return false;
        }
    }

    return true;
}

std::map<char, int> histogram(std::string test);

int main() {
    std::string input;
    std::getline(std::cin, input);
    
    std::map<char, int> result = histogram(input);

    for (const auto &pair : result) {
        std::cout << pair.first << " " << pair.second << std::endl;
    }

    return 0;
}