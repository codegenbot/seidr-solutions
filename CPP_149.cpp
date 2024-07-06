#include <algorithm>
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    if(a.size() != b.size())
        return false;
    
    for(int i = 0; i < a.size(); i++) {
        if(a[i].size() % 2 == 1 && b[i].size() % 2 == 0 || 
           a[i].size() % 2 == 0 && b[i].size() % 2 == 1) 
            return false;
    }
    
    return true;
}

int main() {
    int n;
    std::vector<std::string> a, b;
    std::cout << "Enter the number of strings: ";
    std::cin >> n;

    for(int i = 0; i < n; i++) {
        std::string s;
        std::cout << "Enter string " << i+1 << ": ";
        std::cin >> s;
        a.push_back(s);
    }

    for(int i = 0; i < n; i++) {
        std::string s;
        std::cout << "Enter string " << i+1 << ": ";
        std::cin >> s;
        b.push_back(s);
    }

    if(issame(a, b)) {
        std::cout << "The lists are the same." << std::endl;
    } else {
        std::cout << "The lists are not the same." << std::endl;
    }
    
    return 0;
}