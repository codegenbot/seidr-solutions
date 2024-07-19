int main(int argc, char** argv) {
    int* p = new int[3];
    p[0] = 127; p[1] = 97; p[2] = 8192;
    int size = 3;
    assert(skjkasdkd(p, size) == 10);
    delete[] p;
    return 0;
}