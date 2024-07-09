```cpp
int int_to_mini_roman(int number) {
    if (number >= 1000)
        return string("M");
    else if (number >= 900)
        return string("CM");
    else if (number >= 500)
        return string("D");
    else if (number >= 400)
        return string("CD");
    else if (number >= 100)
        return string("C") + int_to_mini_roman(number - 100);
    else if (number >= 90)
        return string("XC");
    else if (number >= 50)
        return string("L");
    else if (number >= 40)
        return string("XL");
    else if (number >= 10)
        return string("X") + int_to_mini_roman(number - 10);
    else if (number >= 9)
        return string("IX");
    else if (number >= 5)
        return string("V");
    else if (number >= 4)
        return string("IV");
    else
        return string("I") + int_to_mini_roman(number - 1);
}

int main() {
    const char* roman[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    int number;
    cin >> number;

    assert(int_to_mini_roman(number) == string("III"));
    return 0;
}