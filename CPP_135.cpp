```cpp
#include <iostream>
#include <vector>
#include <string>

bool canArrange(const std::vector<std::string>& numbers) {
    int evenCount = 0;
    int oddCount = 0;

    for (const auto& num : numbers) {
        int n = stoi(num);
        if (n % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }

    return (evenCount > 0 && oddCount > 0) || (evenCount == 0 && oddCount == 0);
}

int main() {
    std::vector<std::string> input;
    std::cout << "Enter numbers (space separated): ";
    for(long long i; std::cin >> i; ) {
        input.push_back(std::to_string(i));
        if(std::cin.peek() == ' ') 
            std::cin.ignore();
        else
            break;
    }
    int result = canArrange(input);
    if(result == -1)
        std::cout << "Input cannot be arranged." << std::endl;
    else 
        std::cout << "Input can be arranged." << std::endl;
    return 0;
}