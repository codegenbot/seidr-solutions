#include <string>
#include <sstream>

using namespace std;

bool simplify(string x, string n) {
    int a = 0, b = 0, c = 0, d = 0;
    
    // Split numerator and denominator of both fractions
    size_t pos1 = x.find('/');
    size_t pos2 = n.find('/');
    string num1 = x.substr(0, pos1);
    string denom1 = x.substr(pos1 + 1);
    string num2 = n.substr(0, pos2);
    string denom2 = n.substr(pos2 + 1);

    // Convert strings to integers
    a = stoi(num1) * stoi(denom2);
    b = stoi(denom1) * stoi(num2);
    c = stoi(num1) * stoi(num2);
    d = stoi(denom1) * stoi(denom2);

    if (a == c && b == d)
        return true;
    else
        return false;
}