#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cctype>
#include <cassert>

int count_distinct_characters(const std::string& str) { 
    std::string lower_str = str;
    transform(lower_str.begin(), lower_str.end(), lower_str.begin(), ::tolower);
    std::vector<bool> seen(26, false);
    int count = 0;
    for (char c : lower_str) {
        if (isalpha(c) && !seen[c - 'a']) {
            seen[c - 'a'] = true;
            count++;
        }
    }
    return count;
}

int main() {
    assert(count_distinct_characters("Jerry jERRY JeRRRY") == 5);
    std::cout << "Test passed!" << std::endl;
    return 0;
}