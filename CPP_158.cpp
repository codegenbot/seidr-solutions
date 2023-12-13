```cpp
#include <string>
#include <cassert>

std::string find_max(std::initializer_list<std::string> words) {
    std::string maxWord = "";
    int maxUniqueChars = 0;

    for (std::string word : words) {
        int uniqueChars = 0;
        bool visited[26] = {false};

        for (char c : word) {
            if (!visited[c - 'a']) {
                visited[c - 'a'] = true;
                uniqueChars++;
            }
        }

        if (uniqueChars > maxUniqueChars || (uniqueChars == maxUniqueChars && word < maxWord)) {
            maxWord = word;
            maxUniqueChars = uniqueChars;
        }
    }

    return maxWord;
}

int main() {
    std::initializer_list<std::string> input = {"play", "play", "play"};
    assert((find_max(input) == "play"));
    return 0;
}
```