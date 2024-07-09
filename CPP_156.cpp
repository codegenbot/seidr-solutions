```cpp
const char* roman[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

int int_to_mini_romank(int n) {
    static const int value[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    static const char* romanl[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    int i;
    for (i = 0; n > 0; ++i) {
        if (n >= value[i]) {
            n -= value[i];
            printf("%s", romanl[i]);
        } else
            break;
    }
    return 0;
}

int main() {
    assert(int_to_mini_romank(1000) == "M"); 
    return 0;
}