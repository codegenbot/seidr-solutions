```
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

bool simplify(int numeratorX, int denominatorX, int numeratorN, int denominatorN) {
    return (numeratorX * numeratorN) % denominatorX == 0 && (denominatorX * denominatorN) % denominatorN == 0;
}

int main() {
    string x = "1/5";
    string n = "5/1";
    int numeratorX = stoi(x.substr(0, x.find("/")));
    int denominatorX = stoi(x.substr(x.find("/") + 1));
    int numeratorN = stoi(n.substr(0, n.find("/")));
    int denominatorN = stoi(n.substr(n.find("/") + 1));

    cout << simplify(numeratorX, denominatorX, numeratorN, denominatorN) << endl;
    return 0;
}
```