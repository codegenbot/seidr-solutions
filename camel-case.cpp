Here is the C++ code for the problem:

#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    cout << "Enter a string in kebab-case: ";
    getline(cin, input);

    int i = 0;
    while (i < input.size()) {
        if (input[i] == '-') {
            ++i;
            for (; i < input.size() && input[i] != '-'; ++i) {
                input[i - 1] += topper(input[i]);
            }
            input.erase(i, 1);
        }
    }

    cout << "camel-case: " << input << endl;

    return 0;
}

// Define the function to convert a lower case character to upper case
char topper(char c) {
    if (c >= 'a' && c <= 'z') {
        return c - ('a' - 'A');
    }
    return c;
}