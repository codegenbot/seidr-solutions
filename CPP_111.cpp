#include <map>
#include <string>

std::map<char, int> histogram(const std::string& s) {
    std::map<char, int> result;
    for (char c : s) {
        if (result.find(c) == result.end()) {
            result[c] = 1;
        } else {
            result[c]++;
        }
    }
    return result;
}

int main() {
    assert(histogram("a") == std::map<char, int>{{'a', 1}});
    return 0;
}