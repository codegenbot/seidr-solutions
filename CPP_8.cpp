```cpp
#include <iostream>
#include <vector>
using namespace std;

void issame(int num) {
    vector<int> v{num, num};
}

int main() {
    int sum = 0, product = 1;
    for (int i : {1, 2, 3, 4, 5}) {
        sum += i;
        product *= i;
    }
    cout << "Sum: " << sum << endl;
    cout << "Product: " << product << endl;
}
```