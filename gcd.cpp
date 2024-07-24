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
    
    int gcd = std::__gcd(num1, num2);
    
    cout << gcd << endl;
    
    return 0;
}