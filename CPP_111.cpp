#include <map>
#include <string>
#include <cassert>

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
    assert(issame(histogram("hello"), histogram("ohlle")));
    assert(!issame(histogram("world"), histogram("dlrow")));
    assert(issame(histogram("a"), std::map<char, int>{{'a', 1}});
    
    return 0;
}