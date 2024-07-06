#include <string>
using namespace std;

bool simplify(string x, string n) {
    int a = 1, b = 1, c = 1, d = 1;
    int numeratorX = 0, denominatorX = 0;
    int numeratorN = 0, denominatorN = 0;

    // convert fractions to numerators and denominators
    int i = x.find('/');
    a = stoi(x.substr(0, i));
    c = stoi(x.substr(i + 1));
    i = n.find('/');
    b = stoi(n.substr(0, i));
    d = stoi(n.substr(i + 1));

    // calculate the greatest common divisor of a and b
    numeratorX = a * b;
    denominatorX = c * d;

    while (denominatorX % c != 0) {
        int temp = c;
        c = denominatorX % c;
        denominatorX = temp;
    }

    if ((numeratorX / c) == (b / d)) {
        return true;
    } else {
        return false;
    }
}