#include <iostream>
#include <string>

using namespace std;

void bf(string n) {
    if (n.empty())
        cout << "Error: Input string is empty." << endl;
    else
        cout << "Input string is valid." << endl;
}

int main() {
    int num;
    cin >> num;
    if (num > 0) {
        // Use the bf function with a single argument as intended.
        bf(to_string(num));
    } else {
        cout << "Error: Input number should be positive." << endl;
    }
    return 0;
}