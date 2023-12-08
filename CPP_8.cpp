```
#include <iostream>
#include <vector>

using namespace std;

vector<int> sum_product(vector<int> numbers) {
    int sum = 0, product = 1;
    for (int i : numbers) {
        sum += i;
        product *= i;
    }
    return vector<int>{sum, product};
}
```