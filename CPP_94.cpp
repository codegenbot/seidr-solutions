int main() {
    int arr[] = {127, 97, 8192};
    assert(bitCount(*((int*)arr)) == customBitCount(&arr[0], sizeof(int)));
    return 0;
}