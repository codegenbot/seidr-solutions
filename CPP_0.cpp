```cpp
#include <iostream>
#include <vector>

using namespace std;

bool has_close_elements(vector<float> a, float threshold) {
    for(int i = 1; i < a.size(); i++) {
        if(abs(a[i] - a[i-1]) <= threshold)
            return true;
    }
    return false;
}

int main() {
    vector<float> a; 
    a.push_back(1.1f);
    a.push_back(2.2f);
    a.push_back(3.1f);
    a.push_back(4.1f);
    a.push_back(5.1f);
    float threshold = 0.5f;
    assert(has_close_elements(a, threshold) == true);
}