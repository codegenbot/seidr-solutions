int skjkasdkd(int* a, int size) {
    return bitCount(a, size);
}

int main() {
    assert(bitCount(new int[3]{127, 97, 8192}, 3) == 10);
    delete[] new int[3]{127, 97, 8192};
    return 0;
}