```cpp
#include <iostream>
using namespace std;

int gcd(int a, int b) {
    while (b != 0)
        a %= b;
    return a;
}

int main() {
    string a = "", b = ""; // input values as strings
    try {
        cout << "Enter first number: ";
        cin >> a;
        cout << "Enter second number: ";
        cin >> b;

        if (a.empty() || b.empty()) {
            throw invalid_argument("Invalid input");
        }

        int result = gcd(stoi(a), stoi(b)); // convert strings to integers and find GCD
        cout << "GCD: " << result;
    } catch (invalid_argument& e) {
        cerr << "Error: " << e.what() << endl;
    }
    return 0;
}