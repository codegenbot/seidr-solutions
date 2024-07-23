```
#include<string>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

bool simplify(string x, string n) {
    int a = 1, b = 1, c = 1, d = 1;
    
    // Split the fractions into numerator and denominator
    std::string numerator = x.substr(0, x.find('/'));
    std::string denominator = x.substr(x.find('/') + 1);
    
    a = stoi(numerator);
    b = stoi(denominator);

    std::string num = n.substr(0, n.find('/'));
    std::string denom = n.substr(n.find('/') + 1);
    
    c = stoi(num);
    d = stoi(denom);

    // Check if the product is an integer
    return a / gcd(b, a) == c / gcd(d, c);
}