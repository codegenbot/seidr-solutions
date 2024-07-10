#include<string>
using namespace std;

bool simplify(string x, string n) {
    int a = 1, b = 1, c = 1, d = 1;
    int numeratorX = stoi(strtok(&x[0], "/"));
    int denominatorX = stoi(strtok(nullptr, "/"));
    int numeratorN = stoi(strtok(&n[0], "/"));
    int denominatorN = stoi(strtok(nullptr, "/"));

    // Find the greatest common divisor of a and b
    while (d % a != 0)
        d = d % a;

    // Apply GCD to both fractions
    a = numeratorX / d;
    c = numeratorN / d;
    b = denominatorX / d;
    d = denominatorN / d;

    if ((a * c) == (b * d))
        return true;
    else
        return false;
}