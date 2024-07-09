#include <vector>
#include <cmath>
#include <utility>
#include <string>

int do_algebra(std::string expression) {
    int result = 0;
    int num = 0;
    char op = '+';
    for (char c : expression) {
        if (isdigit(c)) {
            num = num * 10 + (c - '0');
        } else if (c == '+' || c == '-' || c == '*' || c == '/') {
            switch (op) {
                case '+':
                    result += num;
                    break;
                case '-':
                    result -= num;
                    break;
                case '*':
                    result *= num;
                    break;
                case '/':
                    result /= num;
                    break;
            }
            op = c;
            num = 0;
        } else {
            // skip non-alphanumeric characters
        }
    }
    switch (op) {
        case '+':
            result += num;
            break;
        case '-':
            result -= num;
            break;
        case '*':
            result *= num;
            break;
        case '/':
            result /= num;
            break;
    }
    return result;
}