#include <iostream>
#include <string>

bool cycpattern_check(string a, string b) {
    int n = a.size(), m = b.size();
    if (n != m) return false;
    
    string temp = a + a;
    
    return (temp.find(b) != string::npos);
}

int main() {
    std::cout << cycpattern_check("abcd", "cdab") << std::endl;

    return 0;
}