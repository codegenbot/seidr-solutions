```cpp
const char* roman[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

int int_to_mini_romank(int n) {
    if(n >= 1000){
        return strlen("M");
    } else if (n >= 900) {
        return strlen("CM");
    } else if (n >= 500) {
        return strlen("D");
    } else if (n >= 400) {
        return strlen("CD");
    } else if (n >= 100) {
        return strlen("C");
    } else if (n >= 90) {
        return strlen("XC");
    } else if (n >= 50) {
        return strlen("L");
    } else if (n >= 40) {
        return strlen("XL");
    } else if (n >= 10) {
        return strlen("X");
    } else if (n >= 9) {
        return strlen("IX");
    } else if (n >= 5) {
        return strlen("V");
    } else if (n >= 4) {
        return strlen("IV");
    } else{
        return strlen("I");
    }
}

int main() {
    assert(int_to_mini_romank(1000) == 1);
    return 0;
}