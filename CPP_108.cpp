```
#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

int count_nums(vector<int> n) {
    int count = 0;
    for (int i = 0; i < n.size(); i++) {
        if (n[i] > 0) {
            count++;
        } else {
            int sum = 0;
            while (n[i] != 0) {
                sum += abs(n[i] % 10);
                n[i] /= 10;
            }
            if (sum > 0) {
                count++;
            }
        }
    }
    return count;
}
```