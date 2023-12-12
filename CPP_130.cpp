```cpp
#include <iostream>
#include <vector>
#include <memory_resource>

using namespace std;

vector<int, pmr::polymorphic_allocator<int>> tri(int n) {
    vector<int, pmr::polymorphic_allocator<int>> result;
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

int main() {
    int n;
    cin >> n;
    vector<int, pmr::polymorphic_allocator<int>> result = tri(n);
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    return 0;
}
```