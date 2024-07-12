```cpp
#include <iostream>
#include <string>

using namespace std;

bool is_prime(int num) {
    if (num <= 1)
        return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}

int main() {
    string s;
    cin >> s;

    for (char c : s) {
        if (!isdigit(c)) {
            cout << "Error: Input should contain only digits." << endl;
            return 0;
        }
    }

    int num = stoi(s);
    if(num < 2) {
        cout << "Error: Input should be greater than or equal to 2." << endl;
    } else {
        cout << (is_prime(num) ? "True" : "False") << endl;
    }
}