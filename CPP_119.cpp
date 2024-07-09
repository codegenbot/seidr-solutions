```cpp
#include <iostream>
#include <string>
#include <limits>
#include <list>

int main() {
    int n;
    std::cout << "Enter the number of strings: ";
    std::cin >> n;

    std::list<std::string> lst;

    for(int i=0; i<n; ++i){
        std::string s;
        std::getline(std::cin, s);
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        if (!s.empty()) {
            lst.push_back(s);
        }
    }

    return 0;
}