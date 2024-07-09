#include <iostream>
using namespace std;

int main() {
    boost::any a, b;
    cout << "Enter first value (integer, float, double or string): ";
    cin >> a;
    cout << "Enter second value (integer, float, double or string): ";
    cin >> b;

    return compare_one(a, b);
}