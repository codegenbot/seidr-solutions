```cpp
#include <string>
#include <cmath>

using namespace std;

int closest_integer(string value) {
    double num = stod(value);
    return (num >= 0) ? ceil(num) : floor(num);
}

int main() {
    string userInput;
    cout << "Enter a number: ";
    cin >> ws; // ignore whitespace characters (including newline)
    getline(cin, userInput);
    cout << "The closest integer is: " << closest_integer(userInput) << endl;
}