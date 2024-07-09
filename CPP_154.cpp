#include <iostream>
#include <string>

bool cycpattern_check(string a, string b) {
    int n = a.size(), m = b.size();
    if (n != m) return false;
    
    string temp = a + a;
    
    return (temp.find(b) != string::npos);
}

int main() {
    std::string a, b;
    std::cin >> a >> b;
    
    std::cout << (cycpattern_check(a, b) ? "true" : "false") << std::endl;
    
    return 0;
}