#include <string>
#include <vector>
#include <algorithm>

int count_distinct_characters(std::string str) {
    std::vector<char> distinct_chars;
    for (char ch : str) {
        char lowercase_ch = tolower(ch);
        if (find(distinct_chars.begin(), distinct_chars.end(), lowercase_ch) == distinct_chars.end()) {
            distinct_chars.push_back(lowercase_ch);
        }
    }
    return distinct_chars.size();
}

int main() {
    std::string str1 = "Hello World";
    std::string str2 = "Programming";
    std::string str3 = "C++";
    
    int distinct_chars1 = count_distinct_characters(str1);
    int distinct_chars2 = count_distinct_characters(str2);
    int distinct_chars3 = count_distinct_characters(str3);
    
    return 0;
}