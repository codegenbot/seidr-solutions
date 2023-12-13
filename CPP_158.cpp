```
#include <iostream>
#include <string>
#include <vector>

std::string find_max(const std::vector<int>& numbers) {
    int max = numbers[0];
    for (int i = 1; i < numbers.size(); i++) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }
    return std::to_string(max);
}

int main() {
    assert(find_max({"play", "plays", "playing", "played"}) == "play");
    return 0;
}
```