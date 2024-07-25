#include <iostream>
using namespace std;

int multiply(int a, int b){
    return (a % 10) * (b % 10);
}

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    assert(multiply(a, b) == a * b);
    return 0;
}