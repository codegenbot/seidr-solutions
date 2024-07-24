# include <iostream>
# include <string>
# include <vector>
# include <algorithm>
# include <cmath>

using namespace std;

int gcd(int a, int b) {
    if ((a == 0 || b == 0) || (a == 1 || b == 1)) {
        return abs(a);
    }
    
    a = abs(a);
    b = abs(b);
    
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    
    return abs(a);
}

int main() {
    int num1, num2;
    
    cout << "Enter two integers separated by a space: ";
    cin >> num1 >> num2;
    
    int gcd_val = gcd(num1, num2);
    
    cout << gcd_val << endl;
    
    return 0;
}