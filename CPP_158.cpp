```cpp
#include <iostream>
#include <vector>
#include <string>
#include <array>
#include <algorithm>

std::string find_max(std::vector<std::string> words) {
    std::string maxWord = "";
    int maxUniqueChars = 0;

    for (std::string word : words) {
        int uniqueChars = 0;
        std::array<bool, 26> visited = {false};

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
    std::vector<std::string> input = {"play", "play", "play"};
    std::string result = find_max(input);
    std::cout << result << std::endl;

    return 0;
}
```