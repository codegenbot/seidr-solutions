#include <string>
#include <vector>
#include <algorithm>

int count_distinct_characters(std::string str) {
    std::vector<char> distinct_chars;
    for (char ch : str) {
        char lowercase_ch = tolower(ch);
        if (std::find(distinct_chars.begin(), distinct_chars.end(), lowercase_ch) == distinct_chars.end()) {
            distinct_chars.push_back(lowercase_ch);
        }
    }
    return distinct_chars.size();
}

int main() {
    // Add your test cases here
    std::string str1 = "Hello";
    std::string str2 = "World";
    std::string str3 = "Programming";
    
    int count1 = count_distinct_characters(str1);
    int count2 = count_distinct_characters(str2);
    int count3 = count_distinct_characters(str3);
    
    return 0;
}