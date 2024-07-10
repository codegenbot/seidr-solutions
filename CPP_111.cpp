#include <map>
#include <string>
#include <cassert>
using namespace std;

std::map<char, int> histogram(std::string s) {
    std::map<char, int> hist;
    for (char c : s) {
        hist[c]++;
    }
    return hist;
}

bool issame(std::map<char, int> a, std::map<char, int> b) {
    return a == b;
}

int main() {
    assert(issame(histogram("a"), {{'a', 1}}));
    
    return 0;
}