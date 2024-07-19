int bitCount(int* a, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        if ((a[i] & 0x80) != 0)
            sum += 2;
        else
            sum++;
    }
    return sum;
}

int main() {
    assert(bitCount(new int[3]{127, 97, 8192}, 3) == 10);
    delete[] new int[3]{127, 97, 8192};
    return 0;
}