```
#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

// Declare derivative function
float derivative(vector<float> x);

int main() {
    vector<float> xs = {3, 1, 2, 4, 5};
    vector<float> ys = derivative(xs);
    for (auto x : ys) {
        cout << x << " ";
    }
    return 0;
}

// Define derivative function
float derivative(vector<float> x) {
    // Implement derivative function here
    return 0.0f;
}
```