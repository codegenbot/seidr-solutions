```cpp
#include <iostream>
#include <vector>
#include <string>

int can_arrange(std::vector<std::string> input);

int main()
{
    std::vector<std::string> input;
    std::cout << "Enter numbers (space separated): ";
    for(long long i; std::cin >> i; ) {
        input.push_back(std::to_string(i));
        if(std::cin.peek() == ' ') 
            std::cin.ignore();
        else
            break;
    }
    int result = can_arrange(input);
    if(result == -1)
        std::cout << "Input cannot be arranged." << std::endl;
    else 
        std::cout << "Input can be arranged." << std::endl;
    return 0;
}

int can_arrange(std::vector<std::string> input) {
    // Your code here
}