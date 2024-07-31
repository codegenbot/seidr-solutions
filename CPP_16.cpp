#include <iostream>
#include <vector>
#include <algorithm>
#include <cctype>

int count_distinct_characters(const std::string& str) {
    std::vector<char> distinctChars;
    for (char c : str) {
        if (std::isalpha(c) && std::find(distinctChars.begin(), distinctChars.end(), std::tolower(c)) == distinctChars.end()) {
            distinctChars.push_back(std::tolower(c));
        }
    }
    return distinctChars.size();
}

int main() {
    assert(count_distinct_characters("Jerry jERRY JeRRRY") == 5);
    
    return 0;
}