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
    std::string test1 = "hello";
    std::string test2 = "world";
    std::string test3 = "cpp";
    
    int result1 = count_distinct_characters(test1);
    int result2 = count_distinct_characters(test2);
    int result3 = count_distinct_characters(test3);
    
    return 0;
}