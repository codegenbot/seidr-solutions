int countBits(int* a, int size) {
    return bitCount(a, size);
}

int main() {
    int arr[] = {127, 97, 8192};
    assert(countBits(arr, sizeof(arr)/sizeof(arr[0])) == 10);
    delete[] arr;
    return 0;
}