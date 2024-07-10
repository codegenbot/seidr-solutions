```c++
int sum_squares(int* arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += pow(arr[i], 2);
    }
    return sum;
}

int main() {
    assert(sum_squares({-1, -3, 17, -1, -15, 13, -1, 14, -14, -12, -5, 14, -14, 6, 13, 11, 16, 16, 4, 10}, 20) == -1448);
    return 0;
}