int customBitCount(void* ptr, int size) {
    int count = 0;
    unsigned char* p = (unsigned char*)ptr;
    for(int i=0; i<size; i++) {
        if((p[i] & 1))
            count++;
    }
    return count;
}

int bitCount(int a) {
    int count = 0;
    while (a) {
        a &= ~1;
        count++;
    }
    return count;
}

int main() {
    int arr[] = {127, 97, 8192};
    assert(bitCount(*((int*)arr)) == customBitCount(&arr[0], sizeof(int)));
    return 0;
}