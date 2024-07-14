#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    
    int minIndex = *min_element(indices.begin(), indices.end());
    cout << "GCD of indices: " << gcd(minIndex, minIndex) << endl;
    return 0;
}