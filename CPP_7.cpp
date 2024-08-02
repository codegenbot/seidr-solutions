#include <iostream>
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

int main() {
    int n;
    std::cout << "Enter the number of strings: ";
    std::cin >> n;

    std::vector<std::string> str1, str2;

    for(int i = 0; i < n; i++) {
        std::string s;
        std::cout << "Enter string " << (i+1) << ": ";
        std::cin >> s;
        str1.push_back(s);
    }

    std::cout << "Enter the number of strings: ";
    std::cin >> n;

    for(int i = 0; i < n; i++) {
        std::string s;
        std::cout << "Enter string " << (i+1) << ": ";
        std::cin >> s;
        str2.push_back(s);
    }

    if(issame(str1, str2))
        std::cout << "The two sets of strings are the same.\n";
    else
        std::cout << "The two sets of strings are not the same.\n";

    return 0;
}