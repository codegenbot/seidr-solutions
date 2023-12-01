#include <iostream>
#include <string>

using namespace std;

string circular_shift(int x, int shift) {
    string num = to_string(x);         // Convert integer to string
    int length = num.length();         // Get the length of the number
    
    if (shift >= length) {
        // Reverse the digits in the number
        reverse(num.begin(), num.end());
        return num;
    }
    
    shift = shift % length;            // Wrap around the shift value if it exceeds length
    
    // Perform circular shift
    string shifted_num = num.substr(length - shift) + num.substr(0, length - shift);
    
    return shifted_num;
}

int main() {
    int x, shift;
    
    // Read input from user
    cout << "Enter the number: ";
    cin >> x;
    cout << "Enter the shift value: ";
    cin >> shift;
    
    // Call the circular_shift function and print the result
    cout << "Result: " << circular_shift(x, shift) << endl;
    
    return 0;
}