```cpp
#include <string>

int main() { 
    std::string num;
    int count = 0;

    std::cout << "Enter a hexadecimal number: ";
    std::cin >> num; 

    for (char c : num) {
        if ((c >= '2' && c <= '7') || (c == 'B' || c == 'D' || c == 'F')) {
            count++;
        }
    }

    return 0; 
}