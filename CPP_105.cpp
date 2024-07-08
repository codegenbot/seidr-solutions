#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if(a == b) {
        return true;
    }
    else {
        return false;
    }
}

int main() {
    std::vector<int> numbers;    
    for(int i=0; i<5; i++) {
        int n;
        std::cout << "Enter a number: ";
        std::cin >> n;
        numbers.push_back(n);
    }
    std::vector<std::string> result = by_length(numbers);
    for (const auto& str : result) {
        std::cout << str << std::endl;
    }
    return 0;
}

std::vector<std::string> by_length(std::vector<int> numbers) {
    std::vector<std::string> strings;
    for (int number : numbers) {
        if (number >= 1 && number <= 9) {
            strings.push_back(std::to_string(number));
        }
    }
    std::sort(strings.begin(), strings.end());
    std::reverse(strings.begin(), strings.end());
    return strings;
}