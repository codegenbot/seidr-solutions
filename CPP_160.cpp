int do_algebra(vector<string> operators, vector<int> operands) {
    int result = 0;
    for (int i = 0; i < operators.size(); i++) {
        if (operators[i] == "+") {
            result += operands[i];
        } else if (operators[i] == "-") {
            if (i == 0) {
                result = -operands[i];
            } else {
                result -= operands[i];
            }
        } else if (operators[i] == "*") {
            int temp = 1;
            for (int j = i; j < operators.size(); j++) {
                if (operators[j] == "*") {
                    temp *= operands[j];
                } else if (operators[j] == "/") {
                    if (temp == 0) {
                        throw runtime_error("Division by zero");
                    }
                    temp /= operands[j];
                }
            }
            result = temp;
        } else if (operators[i] == "/") {
            if (result == 0) {
                throw runtime_error("Division by zero");
            }
            int temp = result / operands[i];
            for (int j = i + 1; j < operators.size(); j++) {
                if (operators[j] == "*") {
                    temp *= operands[j];
                } else if (operators[j] == "/") {
                    temp /= operands[j];
                }
            }
            result = temp;
        } 
    }
    return result;
}