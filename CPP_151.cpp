```cpp
int double_the_difference(float *lst) {
    int odd_sum = 0;
    for (int i = 0; lst[i]; i++) {
        if ((int)lst[i] % 2 != 0)
            odd_sum += (int)lst[i] * 2;
    }
    return odd_sum;
}

int main() {
    float lst[] = {1.5, 2.0, 3.5};
    int result = double_the_difference(lst);
    assert(result == 7); 
    return 0;
}