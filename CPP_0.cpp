```cpp
#include <iostream>
#include <vector>
#include <cassert>
using namespace std;

bool has_close_elements(vector<float> a, float threshold) {
    for(int i = 1; i < a.size(); i++) {
        if(abs(a[i] - a[i-1]) <= threshold)
            return true;
    }
    return false;
}

int main() {
    vector<float> a = {1.0f, 2.0f, 3.9f, 4.0f, 5.0f, 2.2f};
}