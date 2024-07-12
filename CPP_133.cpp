int sum_squares(int* arr, int size);

int main() {
    assert(sum_squares({-1, 1, 0}) == 2);
    int squares_sum = 0;
    for (int i = 0; i < 3; i++) {
        squares_sum += pow(arr[i], 2);
    }
    return squares_sum;
}