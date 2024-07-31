#include <iostream>
#include <string>
#include <vector>
#include <cassert>

std::vector<std::string> select_words(std::string s, int n) {
    // Implementation of select_words function
}

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    // Implementation of issame function
}

int main() {
    std::string s;
    int n;
    std::cin >> s >> n;
    
    std::vector<std::string> words = select_words(s, n);

    assert(issame(select_words("a b c d e f", 1), std::vector<std::string>{"b", "c", "d", "f"}));
    
    assert(issame(words, select_words(s, n));

    return 0;
}