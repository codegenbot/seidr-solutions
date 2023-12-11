```
#include <iostream>
#include <vector>
using namespace std;

void pluck(const vector<int>& arr, int index) {
    if (index >= 0 && index < arr.size()) {
        auto it = arr.begin() + index;
        arr.erase(it, it + 1);
    }
}

int main() {
    vector<int> arr{7, 9, 7, 1};
    pluck(arr, 0);
    assert(arr == vector<int>{9, 7, 1});
    return 0;
}
```