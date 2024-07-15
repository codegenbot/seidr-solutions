#include <iostream>
#include <algorithm>
#include <map>

bool same_chars(const std::string& s0, const std::string& s1){
    std::map<char, int> char_count_s0;
    std::map<char, int> char_count_s1;

    for(const auto& c : s0)
        char_count_s0[c]++;

    for(const auto& c : s1)
        char_count_s1[c]++;

    return char_count_s0 == char_count_s1;
}