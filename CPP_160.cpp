using namespace std;

int do_algebra(vector<string> operators, vector<int> operand) {
    int result = operand[0];
    for (int i = 0; i < operators.size(); i++) {
        if (operators[i] == "+") {
            result += operand[i + 1];
        } else if (operators[i] == "-") {
            result -= operand[i + 1];
        } else if (operators[i] == "*") {
            result *= operand[i + 1];
        } else if (operators[i] == "//") {
            result = result / static_cast<int>(operand[i + 1]);
        } else if (operators[i] == "**") {
            result = pow(result, static_cast<double>(operand[i + 1]));
        }
    }
    return result;
}