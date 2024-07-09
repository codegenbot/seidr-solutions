```cpp
#include <iostream>
#include <string>
#include <cctype>

int count_upper(std::string s) {
    int count = 0;
    for (int i = 0; i < s.length(); i++) {
        if ((i % 2 == 0 && std::isupper(s[i])) && (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')) {
            count++;
        }
    }
    return count;
}

int main() {
    std::string input;
    cout << "Enter a string: ";
    cin >> input;
    cout << "Count of uppercase vowels at even positions in the string is: " << count_upper(input) << endl;
    return 0;
}