```cpp
int do_algebra(vector<char*> operators, vector<int> operands) {
    int result = operands[0];
    for (int i = 0; i < operators.size(); i++) {
        if (*operators[i] == '+') {
            result += operands[i + 1];
        } else if (*operators[i] == '-') {
            result -= operands[i + 1];
        } else if (*operators[i] == '*') {
            result *= operands[i + 1];
        } else if (*operators[i] == '/') {
            result = result / operands[i + 1];
        } else if (*operators[i] == '*') {
            result = pow(result, operands[i + 1]);
        }
    }
    return result;
}