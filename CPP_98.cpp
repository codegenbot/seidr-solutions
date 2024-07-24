```cpp
#include <iostream>
#include <string>

int count_upper(std::string s) {
    int count = 0;
    for(int i = 1; i < s.length(); i += 2) {
        if(toupper(s[i-1]) == 'A' || toupper(s[i-1]) == 'E' || toupper(s[i-1]) == 'I' || touper