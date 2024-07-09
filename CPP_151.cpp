#include <assert.h>
#include <iostream>

int double_the_difference(float *lst) {
    int odd_sum = 0;
    for (int i = 0; lst[i]; i++) {
        if ((int)lst[i] % 2 != 0)
            odd_sum += (int)lst[i] * 2;
    }
    return odd_sum;
}

int main(int argc, char **argv) {
    int n;
    float *lst = new float[n];
    std::cout << "Enter number of elements: ";
    std::cin >> n;
    
    for (int i = 0; i < n; i++) {
        std::cout << "Enter element " << i+1 << ": ";
        std::cin >> lst[i];
    }
    
    int result = double_the_difference(lst);
    std::cout << "Result: " << result << std::endl;
    delete[] lst;
    return 0;
}