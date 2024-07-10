bool any_int(float a, float b, float c) {
    return (int(a) == (int(b)) + (int(c)) || int(a) == (int(b)) + (int(c)) || int(b) == (int(a)) + (int(c)) || int(c) == (int(a)) + (int(b)));
}

int main() {
    assert(any_int(3.01, 4, 7) == false);
    return 0;
}