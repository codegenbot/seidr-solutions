#include <map>
#include <string>
#include <cassert>

using namespace std;

bool are_same(const std::map<char, int>& a, const std::map<char, int>& b) {
    return a == b;
}

std::map<char, int> histogram(const std::string& test) {
    std::map<char, int> result;

    for (char c : test) {
        if (c != ' ') {
            result[c]++;
        }
    }

    return result;
}

int main() {
    assert(are_same(histogram("a"), std::map<char, int>{{'a', 1}}));
    return 0;
}