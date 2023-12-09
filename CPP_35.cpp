```cpp
#include <iostream>
#include <vector>
#include <algorithm>
#include <memory>

using namespace std;

float max_element(const vector<float>& l) {
    return *max_element(l.begin(), l.end());
}

int main() {
    vector<float, allocator<float>> v = {1, 2, 3};
    cout << "Maximum element: " << max_element(v) << endl;
    return 0;
}
```