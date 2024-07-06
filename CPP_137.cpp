#include <iostream>
#include <string>
#include <limits>

using namespace std;

int main() {
    cout << "Enter two values: ";
    int val1;
    string val1Str;
    cin >> val1Str;

    if (cin.fail()) {
        cout << "Invalid input. Please enter an integer.\n";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin >> val1;  
    } 

    int val2 = stoi(val1Str);
    cout << "The first number is: " << val1 << endl;
    
    if (val1 > val2) {
        cout << "The first number is bigger.\n";
    } else if (val1 < val2) {
        cout << "The second number is bigger.\n";
    } else {
        cout << "Both numbers are equal.\n";
    }

    return 0;
}