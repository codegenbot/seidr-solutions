#include <iostream>
#include <vector>
#include <string>

std::vector<std::string> lst;

int main() {
    int n;
    std::cin >> n;

    for(int i=0; i<n; ++i){
        std::string s;
        std::getline(std::cin, s);
        if (!s.empty()) {
            s.erase(s.begin(), s.end()); 
            lst.push_back(s);
        }
    }

    return 0;
}