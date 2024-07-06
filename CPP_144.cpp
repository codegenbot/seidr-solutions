#include<string>
using namespace std;

bool simplify(string x, string n) {
    int a = 0, b = 1, c = 0, d = 1;
    
    // Convert strings to integers
    size_t pos = x.find('/');
    a = stoi(x.substr(0, pos));
    b = stoi(x.substr(pos + 1));

    pos = n.find('/');
    c = stoi(n.substr(0, pos));
    d = stoi(n.substr(pos + 1));

    // Check if the fractions are equal
    int numerator = (a * d) - (b * c);
    int denominator = abs(b * d);

    return (numerator == 0);
}