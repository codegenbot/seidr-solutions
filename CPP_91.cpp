#include <iostream>
#include <string>

bool is_bored(std::string S) {
    int count = 0;
    std::string boredom = "I";
    for (int i = 0; i <= S.size() - boredom.size(); i++) { 
        if (S.substr(i, boredom.size()).compare(boredom) == 0) {
            count++;
            i += boredom.size() - 1; 
        }
    }

    return count;
}