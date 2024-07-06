```cpp
#include <vector>
#include <string>

// Define the select_words function
std::vector<std::string> select_words(const std::string& input, int count) {
    std::vector<std::string> result;
    size_t start = 0;
    
    while (start <= input.length() && result.size() < count) {
        size_t end = input.find(' ', start);
        if (end == std::string::npos)
            end = input.length();
        
        result.push_back(input.substr(start, end - start));
        start = end + 1;
    }
    
    return result;
}

bool issame(char c1, char c2) {
    if (isalpha(c1) && isalpha(c2)) {
        return tolower(c1) == tolower(c2);
    } else {
        return c1 == c2;
    }
}