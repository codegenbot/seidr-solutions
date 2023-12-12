```cpp
#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

float double_the_difference(const vector<float>& lst) {
    float sum = 0.0f;
    for (int i = 0; i < lst.size(); i++) {
        if (fmod(lst[i], 2.0f) == 1.0f && lst[i] > 0.0f) {
            sum += pow(lst[i], 2);
        }
    }
    return sum;
}

int main() {
    vector<float> lst = {1, 2, 3, 4};
    float odd_sum = double_the_difference(lst);
    assert(odd_sum == 9.0f);
    return 0;
}
```