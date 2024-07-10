#include <string>

using namespace std;

bool simplify(string x, string n) {
    int a = 1, b = 1, c = 1, d = 1;
    
    // Convert string fractions to integers.
    size_t pos = x.find('/');
    a = stoi(x.substr(0, pos));
    b = stoi(x.substr(pos + 1));

    pos = n.find('/');
    c = stoi(n.substr(0, pos));
    d = stoi(n.substr(pos + 1));

    // Check if the product is an integer.
    long long gcd = __gcd(a * c, b * d);
    
    return (a * c) / gcd == (b * d) / gcd;
}

// Function to calculate GCD of two numbers
long long __gcd(long long a,long long b)
{
    if(b==0)
        return a;
    else
        return __gcd(b,a%b);
}