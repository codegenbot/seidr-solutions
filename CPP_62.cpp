```cpp
#include <iostream>
#include <vector>
#include <memory>
using namespace std;

int main() {
    vector<float, allocator<float>> xs = {3, 1, 2, 4, 5};
    vector<float, allocator<float>> ys = derivative(xs);
    for (auto x : ys) {
        cout << x << " ";
    }
    return 0;
}
```