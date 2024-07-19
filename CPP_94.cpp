int customBitCount(void* ptr, int size) {
    int count = 0;
    unsigned char* p = (unsigned char*)ptr;
    for (int i = 0; i < size; ++i) {
        if (*((unsigned char*)&p[i])) {
            ++count;
        }
        if ((*(unsigned char*)&p[i]) & 0x80) {
            ++count;
        }
    }
    return count;
}

int main() {
    int arr[] = {127, 97, 8192};
    assert(customBitCount(&arr[0], sizeof(arr)/sizeof(int)) == 10);
    return 0;
}