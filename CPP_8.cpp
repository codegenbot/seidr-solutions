```
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    vector<int> numbers = {1, 2, 3, 4, 5};
    int result = accumulate(numbers.begin(), numbers.end(), 0, [](int a, int b) { return a * (a + 1); });
    cout << "Sum of products: " << result << endl;
    return 0;
}
```