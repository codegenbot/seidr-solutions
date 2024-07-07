```cpp
#include <iostream>
#include <string>
#include <cassert>

std::string anti_shuffle(const std::string& str) {
    int n = str.length();
    char temp[n+1];
    strcpy(temp, str.c_str());
    for(int i=0; i<n; i++) {
        if(temp[i] >= 'a' && temp[i] <= 'z') {
            temp[i] += ('A' - 'a');
        } else if(temp[i] >= 'A' && temp[i] <= 'Z') {
            temp[i] += ('a' - 'A');
        }
    }
    return std::string(temp);
}

int main() {
    assert(anti_shuffle("Hi. My name is Mister Robot. How are you?") == ".Hi My aemn is Meirst .Rboot How aer ?ouy");
    return 0;
}