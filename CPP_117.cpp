#include <vector>
#include <iostream>

bool issame(std::vector<string> a, std::vector<string> b);

std::vector<string> select_words(std::string s, int n);

bool issame(std::vector<string> a, std::vector<string> b){
    // Implementation of issame function
}

int main() {
    assert(issame(select_words("a b c d e f", 1), {"b", "c", "d", "f"}));
    return 0;
}