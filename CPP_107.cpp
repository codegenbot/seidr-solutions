```
#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<int> even_odd_palindrome(int n) {
    vector<int> result(2);
    for (int i = 1; i <= n; i++) {
        string str = to_string(i);
        if (str == string(str.rbegin(), str.rend())) {
            result[0]++; // even
        } else {
            result[1]++; // odd
        }
    }
    return result;
}
```