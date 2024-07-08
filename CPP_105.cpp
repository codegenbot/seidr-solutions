```cpp
#include <iostream>
#include <vector>
#include <algorithm>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

std::vector<std::string> by_length(std::vector<int> arr) {
    std::vector<std::string> numbers;
    for (int num : arr) {
        if (num >= 1 && num <= 9) {
            switch (num) {
                case 1:
                    numbers.push_back("One");
                    break;
                case 2:
                    numbers.push_back("Two");
                    break;
                case 3:
                    numbers.push_back("Three");
                    break;
                case 4:
                    numbers.push_back("Four");
                    break;
                case 5:
                    numbers.push_back("Five");
                    break;
                case 6:
                    numbers.push_back("Six");
                    break;
                case 7:
                    numbers.push_back("Seven");
                    break;
                case 8:
                    numbers.push_back("Eight");
                    break;
                case 9:
                    numbers.push_back("Nine");
                    break;
            }
        }
    }
    std::sort(numbers.begin(), numbers.end());
    std::reverse(numbers.begin(), numbers.end());
    return numbers;
}

int main() {
    assert(by_length({9, 4, 8}) == std::vector<std::string>({"Eight", "Four", "Nine"}));
}