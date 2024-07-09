```cpp
#include <string>
#include <cassert>

int hex_key(std::string num) {
    int count = 0;
    for (char c : num) {
        if (c >= '2' && c <= '7') {
            count++;
        } else if (c == 'B' || c == 'D' || c == 'F') {
            count++;
        }
    }
    return count;

}

int main() { 
    std::string num;
    std::cout << "Enter a string: ";
    std::cin >> num;
    int result = hex_key(num);
    std::cout << "Count: " << result << std::endl;
}