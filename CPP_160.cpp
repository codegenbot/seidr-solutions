#include <initializer_list>

int do_algebra(int operators[], std::initializer_list<int> operands) {
    int result = 0;
    for (int i = 0; i < sizeof(operators)/sizeof(operators[0]); i++) {
        if (operators[i] == 1) {
            result += *std::next(operands.begin(), i);
        } else if (operators[i] == 2) {
            result -= *std::next(operands.begin(), i);
        } else if (operators[i] == 3) {
            result *= *std::next(operands.begin(), i);
        } else if (operators[i] == 4) {
            result = result / *std::next(operands.begin(), i);
        }
    }
    return result;
}

int main() {
    int result = do_algebra(new int[] {1, 2}, {7, 3, 4});
    return 0;
}