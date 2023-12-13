```
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

void simplify(string x, string n) {
    int numeratorX = stoi(x.substr(0, x.find("/")));
    int denominatorX = stoi(x.substr(x.find("/") + 1));
    int numeratorN = stoi(n.substr(0, n.find("/")));
    int denominatorN = stoi(n.substr(n.find("/") + 1));

    cout << (numeratorX * numeratorN) / denominatorX << " "
         << (denominatorX * denominatorN) / denominatorN << endl;
}

int main() {
    string x = "1/5";
    string n = "5/1";
    simplify(x, n);
    return 0;
}
```