#include <iostream>
#include <vector>
using namespace std;

bool compare(any a, any b) {
    if (a.type() != b.type()) 
        return false;
    string s1 = any_cast<string>(a);
    string s2 = any_cast<string>(b);
    int len1 = s1.length();
    int len2 = s2.length();
    if (len1 != len2) 
        return false;

    for(int i = 0; i < len1; i++) {
        if(s1[i] != s2[i]) 
            return false;
    }
    
    return true;
}

int main() {
    std::any a, b;
    if (std::cin >> a >> b) {
        if (compare(a, b))
            std::cout << "true\n";
        else
            std::cout << "false\n";
    } else {
        std::cerr << "Invalid input.\n";
        return 1; // exit with error code
    }
    return 0;
}