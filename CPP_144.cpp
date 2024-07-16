#include <iostream>
#include <string>
#include <cassert>

using namespace std;

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

bool simplify(string x, string n);

int main() {
    assert(simplify("1/5", "1/5") == false);

    return 0;
}

bool simplify(string x, string n) {
    int numX = stoi(x.substr(0, x.find('/')));
    int denX = stoi(x.substr(x.find('/') + 1));
    int numN = stoi(n.substr(0, n.find('/')));
    int denN = stoi(n.substr(n.find('/') + 1));

    int numResult = numX * numN;
    int denResult = denX * denN;

    int commonFactor = gcd(numResult, denResult);

    return denResult / commonFactor == 1;
}