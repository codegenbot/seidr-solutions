```c
int main() {
    int arr[] = {127, 97, 8192};
    assert(customBitCount(&arr[0], sizeof(arr)/sizeof(int)) == 10);
    return 0;
}