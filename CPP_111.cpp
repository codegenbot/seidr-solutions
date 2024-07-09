#include <map>
#include <string>
#include <cassert>

using namespace std;

bool issame(std::map<char, int> a, std::map<char, int> b) {
    return a == b;
}

std::map<char, int> histogram(std::string str) {
    std::map<char, int> freq;
    for (char c : str) {
        freq[c]++;
    }
    return freq;
}

int main() {
    std::map<char, int> hist = histogram("a");
    assert (issame(hist, {{'a', 1}}));

    return 0;
}