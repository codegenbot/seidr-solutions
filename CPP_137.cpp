#include <boost/any.hpp>
using namespace boost;

void compare() {
    int a, b;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;

    if (a > b) {
        cout << "First number is greater." << endl;
    } else if (a < b) {
        cout << "Second number is greater." << endl;
    } else {
        cout << "Both numbers are equal." << endl;
    }
}

int main() {
    compare();
    return 0;
}