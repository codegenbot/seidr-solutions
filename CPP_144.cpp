#include <string>
#include <sstream>

using namespace std;

bool simplify(string x, string n) {
    int numerator1 = 0, denominator1 = 0, numerator2 = 0, denominator2 = 0;
    
    // Split the strings into numerators and denominators
    size_t pos = x.find('/');
    numerator1 = stoi(x.substr(0, pos));
    denominator1 = stoi(x.substr(pos + 1));
    
    pos = n.find('/');
    numerator2 = stoi(n.substr(0, pos));
    denominator2 = stoi(n.substr(pos + 1));
    
    // Check if the product of the fractions is a whole number
    int numerator = numerator1 * denominator2;
    int denominator = denominator1 * numerator2;
    
    return (numerator == denominator);
}