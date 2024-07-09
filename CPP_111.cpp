#include <map>
#include <string>
#include <cassert>

std::map<char, int> histogram(std::string s) {
    std::map<char, int> hist;
    for (char c : s) {
        hist[c]++;
    }
    return hist;
}

bool issame(std::map<char,int> a, std::map<char,int> b) {
    return a == b;
}

int main() {
    std::map<char, int> hist1 = histogram("aabbc");
    std::map<char, int> hist2 = histogram("abbac");
    
    assert(issame(hist1, hist2) == true);

    std::map<char, int> hist3 = histogram("hello");
    std::map<char, int> hist4 = histogram("world");

    assert(issame(hist3, hist4) == false);

    return 0;
}