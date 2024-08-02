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

    std::vector<std::string> str1(n);
    for(int i = 0; i < n; ++i) {
        std::cout << "Enter string " << i+1 << ": ";
        std::cin >> str1[i];
    }

    int m;
    std::cout << "Enter the number of substrings: ";
    std::cin >> m;

    std::vector<std::string> sub(m);
    for(int i = 0; i < m; ++i) {
        std::cout << "Enter substring " << i+1 << ": ";
        std::cin >> sub[i];
    }

    vector<string> result = filter_by_substring(str1, sub[0]);
    bool same = false;
    
    for(int i = 0; i < m-1; ++i) {
        if(issame(result, filter_by_substring(str1, sub[i+1]))) {
            same = true;
            break;
        }
    }

    std::cout << "Are all strings the same? ";
    if(same)
        std::cout << "Yes" << std::endl;
    else
        std::cout << "No" << std::endl;

    return 0;
}