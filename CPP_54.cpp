```cpp
#include <algorithm>
#include <string>
#include <iostream>
#include <cassert>
#include <initializer_list>

bool same_chars(std::initializer_list<char> chars) {
    std::vector<char> s(chars.begin(), chars.end());
    sort(s.begin(), s.end());
    return s == vector<char>(chars.begin(), chars.end());
}

int main() {
    assert(!same_chars({'a', 'a', 'b', 'b'}));
    cout << (same_chars('a', 'c', 'd', 'e') ? "True" : "False") << endl;
}