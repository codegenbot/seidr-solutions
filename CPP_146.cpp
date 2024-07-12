#include <iostream>
#include <vector>

int main() {
    int count = 0;
    int num;
    
    std::cout << "Enter the numbers (enter -1 to stop):" << std::endl;
    
    do {
        std::cin >> num;
        
        if (abs(num) > 10 && (num % 10) % 2 != 0 && (num / 10) % 10 % 2 != 0) {
            count++;
        }
        
    } while (num != -1);
    
    std::cout << "Count of special numbers: " << count << std::endl;
    
    return 0;
}