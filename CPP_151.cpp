#include <assert.h>

int double_the_difference(float *lst) {
    int odd_sum = 0;
    for (int i = 0; lst[i]; i++) {
        if ((int)lst[i] % 2 != 0)
            odd_sum += (int)lst[i] * 2;
    }
    return odd_sum;
}

float* getFloatArray(int n) {
    float lst[n];
    for (int i = 0; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%f", &lst[i]);
    }
    return lst;
}

int main() {
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    float* lst = getFloatArray(n);
    int result = double_the_difference(lst);
    assert(result == 7); 
    return 0;
}