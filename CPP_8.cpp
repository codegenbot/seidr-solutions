```
#include <iostream>
#include <vector>

using namespace std;

vector<int> sum_product(const vector<int>& numbers) {
    int sum = 0, product = 1;
    for (int i : numbers) {
        sum += i;
        product *= i;
    }
    return {sum, product};
}

int main() {
    vector<int> numbers = {1, 2, 3, 4, 5};
    auto result = sum_product(numbers);
    cout << "Sum: " << result[0] << endl;
    cout << "Product: " << result[1] << endl;
    return 0;
}
```