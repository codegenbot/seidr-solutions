```cpp
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
        string str = to_string(num);
        bf(str); 
    } else {
        cout << "Error: Input number should be positive." << endl;
    }
    return 0;
}