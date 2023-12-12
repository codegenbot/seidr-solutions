```
#include <iostream>
#include <vector>
#include <memory>

using namespace std;

vector<int, std::allocator<int>> tri(int n) {
    vector<int, std::allocator<int>> result;
    if (n == 1) {
        result.push_back(3);
    } else if (n % 2 == 0) {
        result.push_back(1 + n / 2);
    } else {
        int prev = tri(n - 1)[0];
        int curr = tri(n - 2)[0];
        result.push_back(prev + curr + tri(n + 1)[0]);
    }
    return result;
}
```