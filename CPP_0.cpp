```cpp
#include <vector>
#include <assert.h>

int main() {
    std::vector<float> a = {1.0f, 2.0f, 3.9f, 4.0f, 5.0f, 2.2f};
    bool has_close_elements(float arr[], int n, float threshold) {
        for(int i=0; i<n-1; i++) {
            for(int j=i+1; j<n; j++) {
                if(abs(arr[i]-arr[j]) <= threshold) {
                    return true;
                }
            }
        }
        return false;
    }
    assert(has_close_elements(&a[0], a.size(), 0.5) == false);
}