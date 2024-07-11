#include <string>
#include <vector>

using namespace std;

bool simplify(string x, string n) {
    int numeratorX = 0, denominatorX = 1;
    int numeratorN = 0, denominatorN = 1;

    // parse fraction x
    size_t pos = x.find('/');
    numeratorX = stoi(x.substr(0, pos));
    denominatorX = stoi(x.substr(pos + 1));

    // parse fraction n
    pos = n.find('/');
    numeratorN = stoi(n.substr(0, pos));
    denominatorN = stoi(n.substr(pos + 1));

    int commonDivisor = gcd(denominatorX, denominatorN);
    int numeratorXNew = numeratorX / commonDivisor;
    int denominatorXNew = denominatorX / commonDivisor;

    if (numeratorN % denominatorXNew != 0) {
        return false;
    }

    return true;
}

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}