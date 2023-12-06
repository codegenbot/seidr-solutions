```cpp
#include <iostream>
#include <vector>
using namespace std;

vector<float> derivative(vector<float> xs) {
    vector<float> result;
    for (int i = 1; i < xs.size(); i++) {
        result.push_back(xs[i] * i);
    }
    return result;
}

int main() {
    vector<float, allocator<float>> xs = {3, 1, 2, 4, 5};
    vector<float, allocator<float>> ys = derivative(xs);
    for (auto x : ys) {
        cout << x << " ";
    }
    return 0;
}
```