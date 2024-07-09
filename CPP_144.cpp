#include <string>
#include <iostream>

using namespace std;

bool simplify(string x, string n) {
    int a = 0, b = 0, c = 0, d = 0;
    
    // Extract numerator and denominator from both fractions
    size_t pos1 = x.find('/');
    size_t pos2 = n.find('/');
    
    a = stoi(x.substr(0, pos1));
    b = stoi(x.substr(pos1 + 1));
    c = stoi(n.substr(0, pos2));
    d = stoi(n.substr(pos2 + 1));
    
    // Calculate the greatest common divisor of both denominators
    int gcd = abs(b) > abs(d) ? gcd(abs(b), abs(d)) : gcd(abs(d), abs(b));
    
    // Check if the product of the two fractions is a whole number
    return (a * c / gcd) == (b * d / gcd);
}

// Helper function to calculate the greatest common divisor
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    cout << simplify("1/5", "5/1") << endl;  // true
    cout << simplify("1/6", "2/1") << endl;  // false
    cout << simplify("7/10", "10/2") << endl;  // false
    
    return 0;
}