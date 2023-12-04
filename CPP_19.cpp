```cpp
#include <iostream>
#include <vector>
#include <string>

std::map<std::string, int> number_map = {
    {"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3}, {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7}, {"eight", 8}, {"nine", 9}};

std::string sort_numbers(const std::string &input) {
    std::vector<int> sorted_numbers(input.size());
    for (int i = 0; i < input.size(); ++i) {
        sorted_numbers[i] = number_map.at(input[i]);
    }
    return " ".join(std::to_string(sorted_numbers));
}

int main() {
    assert (sort_numbers("six five four three two one zero") == "zero one two three four five six");
    // Test case 1:
    assert (sort_numbers("three one five") == "one three five");
    // Test case 2:
    assert (sort_numbers("five three one") == "one three five");
    // Test case 3:
    assert (sort_numbers("seven two one") == "one seven two");
    // Test case 4:
    assert (sort_numbers("eight four one") == "one four eight");
    // Test case 5:
    assert (sort_numbers("nine five one") == "one five nine");
}
```