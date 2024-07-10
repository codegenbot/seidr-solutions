#include <iostream>
#include <string>

using namespace std;

void badFunction(string n) {
    if (n.empty())
        cout << "Error: Input string is empty." << endl;
    else
        cout << "Input string is valid." << endl;
}

int main() {
    int num;
    cin >> num;
    if (num > 0) {
        // No need for assert here
    } else {
        cout << "Error: Input number should be positive." << endl;
    }
    
    // Call the function as needed
    badFunction("Jupiter");
    
    return 0;
}