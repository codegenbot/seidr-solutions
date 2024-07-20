#include <string>
#include <sstream>
#include <iostream>

using namespace std;

bool simplify(string x, string n) {
    stringstream sx(x), sn(n);
    int numX, denX, numN, denN;
    char slash;

    sx >> numX >> slash >> denX;
    sn >> numN >> slash >> denN;

    return (numX * denN == numN * denX);
}

int main() {
    string x, n;
    cin >> x >> n;
    cout << (simplify(x, n) ? "true" : "false") << endl;
    return 0;
}