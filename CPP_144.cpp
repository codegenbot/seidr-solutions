#include <string>
#include <vector>

bool simplify(string x, string n) {
    int a = 0, b = 0, c = 0, d = 0;
    
    // Convert fractions to integers
    size_t pos = x.find('/');
    a = stoi(x.substr(0, pos));
    b = stoi(x.substr(pos + 1));
    
    pos = n.find('/');
    c = stoi(n.substr(0, pos));
    d = stoi(n.substr(pos + 1));
    
    // Calculate the greatest common divisor (GCD) of numerator and denominator
    int g = gcd(b, d);
    
    // Check if GCD is equal to 1 or not
    return (a * c / g == a * d / b);
}

// Function to calculate GCD using Euclidean Algorithm
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}