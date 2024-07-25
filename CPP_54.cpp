#include <algorithm>
#include <string>
#include <iostream>

bool same_chars() {
    std::vector<char> s;
    int count = 0;

    // read input from user
    char c;
    while (std::cin >> c) {
        for (char ch : s) {
            if (c == ch)
                return false;
        }
        s.push_back(c);
        ++count;
    }

    // return true if all characters are same, else false
    return count > 0 && std::count(s.begin(), s.end(), s[0]) == s.size();
}

int main() {
    assert(!same_chars('a', 'a', 'b', 'b'));
    std::cout << (same_chars('a', 'c', 'd', 'e') ? "True" : "False") << std::endl;
}