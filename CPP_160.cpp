```cpp
int do_algebra(char* operators) {
    if (!operators) {
        return 0;
    }

    char* end = operators;
    int result = 0;
    int temp = 0;
    int sign = 1;

    while (*end) {
        if (*end == ' ') {
            end++;
            continue;
        }
        if (*end >= '0' && *end <= '9') {
            temp = temp * 10 + (*end - '0');
            end++;
        }
        else if (*end == '+' || *end == '-' || *end == '*' || *end == '/') {
            sign = (*end == '+') ? 1 : ( *end == '-') ? -1 : (( *end == '*') ? 1 : -1);
            if (temp) {
                result += sign * temp;
            }
            temp = 0;
        }
    }
    return result;
}