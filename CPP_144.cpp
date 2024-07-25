#include <string>
#include <sstream>

bool simplify(string x, string n) {
    int num1, den1, num2, den2;
    char slash;

    stringstream ss1(x), ss2(n);
    ss1 >> num1 >> slash >> den1;
    ss2 >> num2 >> slash >> den2;

    return (num1 * num2) % (den1 * den2) == 0;
}