#include <iostream>
#include <vector>
#include <algorithm>

int count_distinct_characters(std::string str) {
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    std::vector<bool> visited(26, false);
    int count = 0;
    for (char c : str) {
        if (isalpha(c) && !visited[tolower(c) - 'a']) {
            visited[tolower(c) - 'a'] = true;
            count++;
        }
    }
    return count;
}

int main() {
    assert(count_distinct_characters("Jerry jERRY JeRRRY") == 5);
    return 0;
}