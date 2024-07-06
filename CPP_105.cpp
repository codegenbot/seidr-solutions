#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

std::string issame(int x1, int x2) {
    if(x1 == x2)
        return "Same";
    else
        return "Not Same";
}

int main() {
    std::vector<int> numbers = {3, 9, 6, 5};
    
    for (int number : numbers) {
        std::cout << number << " is same with ";
        for (int num : numbers) {
            if(num != number)
                std::cout << num << " because they are " << issame(number, num) << ".\n";
        }
        std::cout << "\n";
    }

    return 0;
}