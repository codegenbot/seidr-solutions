#include <iostream>
#include <string>

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
    assert(hex_key("") == 0);
    std::string input;
    cout << "Enter a hexadecimal number: ";
    cin >> input;
    cout << "The count of characters in the given hexadecimal number is: " << hex_key(input) << endl;
    return 0;
}