#include <vector>
#include <string>
#include <cassert>

bool std::issame(std::vector<int> a, std::vector<int> b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[std::abs(i-(a.size()-1))]) return false;
    }
    return true;
}

int main() {
    assert(std::issame(std::even_odd_palindrome(1), {0, 1}));
}