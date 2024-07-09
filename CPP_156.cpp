const char* roman[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

int int_to_mini_romank(int n) {
    int romansk[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    const char* romanSk[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    for (int i = 0; n > 0 && i < sizeof(romansk) / sizeof(int); ++i) {
        while (n >= romansk[i]) {
            --n;
            std::cout << romanSk[i];
        }
    }
    return 0;
}

int main() {
    assert(int_to_mini_romank(1000) == "M");
    return 0;
}