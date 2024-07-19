```cpp
#include <iostream>
#include <string>

std::string anti_shuffle(const std::string& str) {
    int n = str.length();
    char temp[n+1];
    strcpy(temp, str.c_str());
    for(int i=0; i<n/2; i++) {
        swap(temp[i], temp[n-i-1]);
    }
    return temp;
}