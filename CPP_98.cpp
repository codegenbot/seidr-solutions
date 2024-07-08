#include <bits/stdc++.h>
#include <string>

int count_upper(std::string s) {
    int count = 0;
    for (int i = 0; i < s.length(); i++) {
        if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z')) {
            count++;
        }
    }
    if(count == 0) 
        std::cout << "No uppercase characters found." << std::endl;
    else
        std::cout << "Total number of uppercase characters is: " << count << std::endl;
    return count;
}