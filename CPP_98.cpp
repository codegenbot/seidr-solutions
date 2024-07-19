```cpp
#include <string>
#include <cctype>
#include <iostream>
using namespace std;

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);
    int count = 0; 
    for (int i = 0; i < input.length(); i++) {
        if ((i % 2 == 0 && isupper(input[i])) && (input[i] == 'A' || input[i] == 'E' || input[i] == 'I' || input[i] == 'O' || input[i] == 'U')) {
            count++;
        }
    }
    cout << "Number of uppercase vowels at even positions: " << count << endl;
    return 0;
}