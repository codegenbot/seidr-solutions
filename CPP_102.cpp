int choose_num(int x, int y) {
    for (int i = x; i <= y; i++) {
        if (i % 2 == 0)
            return i;
    }
    return -1;
}

int main() {
    assert(choose_num(546, 546) == 546);
    return 0;
}