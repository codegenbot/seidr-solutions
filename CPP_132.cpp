#include <vector>
#include <string>

int is_nested(const std::string& str) {
    int count_open = 0, count_close = 0;

    for (char c : std::vector<char>(str.begin(), str.end())) { 
        if (c == '[') {
            count_open++;
            count_close = 0;
        } else if (c == ']') {
            count_close++;
            if (count_open <= count_close) return false; 
            count_open--;
        }
    }
    return count_open > 0;
}