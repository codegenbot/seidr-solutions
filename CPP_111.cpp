
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
    std::map<char, int> hist1 = histogram("programming");
    std::map<char, int> hist2 = histogram("contest");

    assert(issame(hist1, hist1));
    assert(!issame(hist1, hist2));

    return 0;
}