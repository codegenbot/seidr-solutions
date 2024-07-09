```cpp
#include <vector>
#include <string>
#include <cstdlib>

int eval(const std::string& s) {
    int result = 0;
    if (s.empty()) {
        return result;
    }

    int start = 0, sign = 1;
    for (int i = 0; i < s.size(); i++) {
        if (!isdigit(s[i])) {
            if (s[i] == '+') {
                sign = 1;
            } else if (s[i] == '-') {
                sign = -1;
            }
            start = i + 1;
        } else {
            result += sign * std::atoi(&s[i]);
        }
    }

    return result;
}

int do_algebra(char* op, int oper[], int n) {
    char expression[1000];
    for (int i = 0; i < n - 1; i++) {
        sprintf(expression + strlen(expression), "%d%s", oper[i], op);
    }
    sprintf(expression + strlen(expression), "%d", oper[n - 1]);
    int result = eval(std::string(expression));
    return result;
}

int main() {
    char* op = new char[3];
    strcpy(op, "//*");
    int oper[] = {7, 3, 4};
    int n = sizeof(oper) / sizeof(oper[0]);
    int result = do_algebra(op, oper, n);
    return 0;
}