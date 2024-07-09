#include <iostream>
using namespace std;

bool pairs_sum_to_zero(int a, int b) {
    if (a + b == 0) {
        return true;
    }
    return false;
}

int main() {
    int a, b;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;

    std::cout << (pairs_sum_to_zero(a, b) ? "True" : "False");
    return 0;
}