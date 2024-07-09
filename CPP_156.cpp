```cpp
#include <cassert>
const char* roman[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

string int_to_roman(int n) {
    string result;
    for (int i = 0; i < 13; ++i) {
        while (n >= roman2int(roman[i])) {
            n -= roman2int(roman[i]);
            result += roman[i];
        }
    }
    return result;
}

int roman2int(const char *s) {
    int val = 0;
    for (; *s; ++s)
        if (*s == 'M')
            val += 1000;
        else if (*s == 'C' || *s == 'D')
            switch (*s) {
                case 'M':
                    val += 900;
                    break;
                case 'C':
                    val += 400;
                    break;
                default:
                    val += 500;
            }
        else if (*s >= 'I' && *s <= 'X')
            switch (*s) {
                case 'M':
                    return -1000;
                case 'C':
                    if (roman2int(s + 1) > 0)
                        val -= 100;
                    break;
                default:
                    if (val < 4)
                        val--;
                    else
                        val += int(val / 10);
            }
        else
            switch (*s) {
                case 'I':
                    val++;
                    break;
                case 'V':
                    val += 3;
                    break;
                case 'L':
                    val += 30;
                    break;
                default:
                    return -1;
            }
    return val;
}