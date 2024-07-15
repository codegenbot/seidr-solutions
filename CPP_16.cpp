#include <iostream>
#include <vector>
#include <algorithm>
#include <cctype>
#include <cassert>

int count_distinct_characters(std::string str) {
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    std::vector<int> count(26, 0);
    for(char c : str){
        if(std::isalpha(c)){
            count[c - 'a']++;
        }
    }
    int distinct_chars = 0;
    for(int c : count){
        if(c > 0){
            distinct_chars++;
        }
    }
    return distinct_chars;
}

int main() {
    assert(count_distinct_characters("Jerry jERRY JeRRRY") == 5);
    return 0;
}