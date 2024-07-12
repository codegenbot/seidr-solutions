#include <iostream>
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
    while(true) {
        int num;
        cout << "Enter a number: ";
        cin >> num;
        if (cin.fail()) {
            cout << "Invalid input. Try again." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else break;
    }
    cout << (is_prime(num) ? "True" : "False") << endl;
}