#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main() {
    int num1, num2;
    
    cout << "Enter two integers separated by a space: ";
    cin >> num1 >> num2;
    
    int gcd_val = gcd(num1, num2);
    
    cout << gcd_val << endl;
    
    return 0;
}