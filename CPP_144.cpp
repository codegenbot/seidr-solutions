```
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

bool simplify(string::iterator x_it, string::iterator n_it) {
    // ...
}

int main() {
    string x = "1/5";
    string n = "5/1";
    int x_int = stoi(x);
    int n_int = stoi(n);
    cout << simplify(x.begin(), x.end()) << endl;
    return 0;
}
```