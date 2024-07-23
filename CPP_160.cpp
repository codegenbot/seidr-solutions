#include <vector>
#include <string>

int do_algebra(vector<std::string> operato, vector<int> operand) {
    int result = operand[0];
    for (int i = 0; i < operato.size(); i++) {
        if (operato[i] == "+") {
            result += operand[i + 1];
        } else if (operato[i] == "-") {
            result -= operand[i + 1];
        } else if (operato[i] == "*") {
            result *= operand[i + 1];
        } else if (operato[i] == "//") {
            result = result / static_cast<int>(operand[i + 1]);
        } else if (operato[i] == "**") {
            int temp = result;
            for(int j = 0; j < operand[i+1];j++){
                result = result * temp;
            }
        }
    }
    return result;
}