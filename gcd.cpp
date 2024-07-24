#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    string text, target;
    
    cout << "Enter two integers separated by a space: ";
    cin >> text >> target;
    
    long long num1 = stoll(text);
    long long num2 = stoll(target);
    
    long long gcd = __gcd(num1, num2);
    
    cout << gcd << endl;
    
    return 0;
}