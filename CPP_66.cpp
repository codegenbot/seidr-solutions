```cpp
#include <string>
#include <cassert>

int digitSum(string s) {
    int sum = 0;
    for (char c : s) {
        if (!isdigit(c)) {
            sum += static_cast<int>(c) - 'A' + 1; 
        } else {
            sum += c - '0';
        }
    }
    return sum;
}

int main() {
    assert(digitSum("You arE Very Smart") == 327);
    
    string str = "Enter your name: ";
    cout << str;
    
    string input;
    cin >> input;
    
    cout << "Your total score is: " << digitSum(input) << endl;
}