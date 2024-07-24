#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int gcd(int a, int b) {
    if (a == 0 || b == 0) {
        return a + b;
    }
    
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;
    
    cout << "Enter two integers separated by a space: ";
    cin >> num1 >> num2;
    
    int gcd_val = gcd(num1, num2);
    
    cout << gcd_val << endl;
    
    return 0;
}