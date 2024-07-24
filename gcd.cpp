#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    string text, target;
    
    cout << "Enter two integers separated by a space: ";
    cin >> text >> target;
    
    int num1 = stoi(text);
    int num2 = stoi(target);
    
    int gcd = __gcd(num1, num2);
    
    cout << gcd << endl;
    
    return 0;
}