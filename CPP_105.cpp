```cpp
#include <vector>
#include <string>
#include <algorithm>

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

std::vector<std::string> by_length(std::vector<int> arr) {
    std::vector<std::string> numbers;
    for (int i : arr) {
        if (i >= 1 && i <= 9)
            numbers.push_back(std::to_string(i));
    }
    sort(numbers.begin(), numbers.end());
    reverse(numbers.begin(), numbers.end());
    std::vector<std::string> result;
    for (std::string num : numbers) {
        switch (std::stoi(num)) {
            case 1: result.push_back("One"); break;
            case 2: result.push_back("Two"); break;
            case 3: result.push_back("Three"); break;
            case 4: result.push_back("Four"); break;
            case 5: result.push_back("Five"); break;
            case 6: result.push_back("Six"); break;
            case 7: result.push_back("Seven"); break;
            case 8: result.push_back("Eight"); break;
            case 9: result.push_back("Nine");
        }
    }
    return result;
}

int main() {
    assert(issame(by_length({9, 4, 8}), {"Nine", "Eight", "Four"}));
}