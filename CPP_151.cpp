```cpp
#include <assert.h>

int main() {
    float lst[] = {1.5f, 2.0f, 3.5f};
    int n = sizeof(lst)/sizeof(lst[0]);
    int result = double_the_difference(lst, n);
    assert(result == 7); 
    return 0;
}

int double_the_difference(float *lst, int n) {
    float sum = 0;
    for (int i = 0; i < n; i++) {
        if ((int)lst[i] % 2 != 0)
            sum += (int)lst[i] * 2;
    }
    return (int)sum;
}