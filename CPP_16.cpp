
#include <algorithm>
#include <cctype>
#include <vector>

int count_distinct_characters(std::string str) {
    std::transform(str.begin(), str.end(), str.begin(), ::tolower);
    std::vector<bool> visited(26, false);
    int count = 0;
    for (char c : str) {
        if (std::isalpha(c) && !visited[c - 'a']) {
            visited[c - 'a'] = true;
            count++;
        }
    }
    return count;
}