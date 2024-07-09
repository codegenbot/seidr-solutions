```cpp
#include <iostream>
#include <string>

std::string anti_shuffle(std::string s) {
    int n = s.length();
    char temp[n+1];
    strcpy(temp, s.c_str());
    for(int i=0; i<n; i++) {
        for(int j=i; j<n; j++) {
            if(temp[i] != temp[j]) {
                std::swap(temp[i], temp[j]);
                break;
            }
        }
    }
    return temp;
}

int main {
    std::string str;
    std::cout << "Enter a string: ";
    std::cin >> str;
    std::string res = anti_shuffle(str);
    std::cout << "Anti-Shuffled String: " << res << std::endl;
}.