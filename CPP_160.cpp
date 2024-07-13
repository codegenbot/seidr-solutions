int do_algebra(vector<string> operato, vector<int> operand) {
    int result = 0;
    for(int i = 0; i < operato.size(); i++) {
        if(operato[i] == "+") {
            result += operand[i];
        } else if(operato[i] == "-") {
            result -= operand[i];
        } else if(operato[i] == "*") {
            int temp = 0;
            for(int j = i; j < operato.size(); j++) {
                if(operato[j] == "*") {
                    temp += operand[j] * operand[j+1];
                    break;
                }
            }
            result += temp;
        } else if(operato[i] == "//") {
            int temp = 0;
            for(int j = i; j < operato.size(); j++) {
                if(operato[j] == "//") {
                    temp = operand[j] / (operand[j+1]);
                    break;
                }
            }
            result += temp;
        } else if(operato[i] == "**") {
            int temp = 0;
            for(int j = i; j < operato.size(); j++) {
                if(operato[j] == "**") {
                    temp = pow(operand[j], operand[j+1]);
                    break;
                }
            }
            result += temp;
        }
    }
    return result;
}