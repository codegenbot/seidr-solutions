```
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "abcd";
    int l = str.length();
    int num = (l + 2) / 3;
    string x, output;
    for (int i = 0; i * 3 < l; i++) {
        x = str.substr(i * 3, 3);
        if (x.length() == 3)
            x = x[2] + x.substr(0, 2);
        output += x;
    }
    cout << "Encoded string: " << output << endl;
    return 0;
}
```