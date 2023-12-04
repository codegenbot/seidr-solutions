```
#include <iostream>
#include <vector>

using namespace std;

vector<int> sum_product(vector<int> numbers) {
    int sum = 0;
    int product = 1;
    for (auto num : numbers) {
        sum += num;
        product *= num;
    }
    return {sum, product};
}
```