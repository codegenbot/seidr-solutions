#include <iostream>
#include <vector>
#include <string>

int main() {
    int n;
    std::cin >> n;

    std::vector<std::string> lst;

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