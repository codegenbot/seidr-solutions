```cpp
#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

// Declare derivative() function
float derivative(const vector<float>& xs);

int main() {
    // Define xs and ys vectors
    vector<float> xs = {3, 1, 2, 4, 5};
    vector<float> ys = derivative(xs);

    // Print the result
    for (auto x : ys) {
        cout << x << " ";
    }

    return 0;
}
```