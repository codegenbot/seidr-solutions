int customBitCount(int* arr, int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        count += bitCount(arr[i]);
    }
    return count;
}