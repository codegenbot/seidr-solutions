```cpp
#include <iostream>
#include <string>

int hex_key_value(const std::string& num) {
    int count = 0;
    for (char c : num) {
        if ((c >= '2' && c <= '7') || (c == 'B' || c == 'D' || c == 'F')) {
            count++;
        }
    }
    return count;
}

int main() {
    std::string input = "";
    std::cout << "Enter a hexadecimal number: ";
    char temp[3];
    cin >> temp;
    if (cin.fail()) {
        cout << "Invalid input." << endl;
        return 1;
    }
    for (char c : temp) {
        if (!isxdigit(c)) {
            cout << "Invalid character. Please enter a hexadecimal number." << endl;
            return 1;
        }
    }
    input = temp;
    int output = hex_key_value(input);
    std::cout << "The result is: " << output << std::endl;
}