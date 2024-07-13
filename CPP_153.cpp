```cpp
#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    cout << "The reverse of the entered string is: " << string(str.rbegin(), str.rend()) << endl;
}