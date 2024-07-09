```cpp
#include <vector>
#include <algorithm>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b);

std::vector<std::string> by_length(std::vector<int> arr) {
    std::vector<std::vector<std::string>> result;
    for (int i : arr) {
        if (i >= 1 && i <= 9)
            result.push_back({(i == 1 ? "One" : i == 2 ? "Two" : i == 3 ? "Three" : i == 4 ? "Four" : i == 5 ? "Five" : i == 6 ? "Six" : i == 7 ? "Seven" : i == 8 ? "Eight" : "Nine")});
    }
    std::sort(result.begin(), result.end());
    std::reverse(result.begin(), result.end());
    std::vector<std::string> final_result;
    for (std::vector<std::string> strings : result) {
        final_result.insert(final_result.end(), strings.begin(), strings.end());
    }
    return final_result;
}

int main() {
    assert(issame({{"Nine"}}, {{"Nine"}}));
    return 0;
}