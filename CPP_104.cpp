```
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> unique_digits(vector<int> x) {
    vector<int> result;
    for (int i = 0; i < x.size(); i++) {
        int num = x[i];
        while (num > 0) {
            if (num % 2 == 0) {
                break;
            }
            num /= 10;
        }
        if (num == 0) {
            result.push_back(x[i]);
        }
    }
    return result;
}
```