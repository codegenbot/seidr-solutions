#include <string>
#include <vector>

using namespace std;

bool simplify(string x, string n) {
    int a = 0, b = 0, c = 0, d = 0;
    
    // Convert strings to integers
    size_t pos = x.find('/');
    a = stoi(x.substr(0, pos));
    b = stoi(x.substr(pos + 1));

    pos = n.find('/');
    c = stoi(n.substr(0, pos));
    d = stoi(n.substr(pos + 1));

    // Check if the product of the fractions is an integer
    int numerator = a * c;
    int denominator = b * d;

    return (numerator == denominator);
}