```cpp
#include <iostream>
#include <vector>
#include <string>
#include <limits>

int main() {
    int n;
    std::cin >> n;

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::vector<std::string> lst;

    for(int i=0; i<n; ++i){
        std::string s;
        std::getline(std::cin, s);
        if (!s.empty()) {
            lst.push_back(s);
        }
    }

    return 0;
}