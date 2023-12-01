int do_algebra(vector<string> operatoRs, vector<int> operanDs) {
    int result = operanDs[0];

    for (int i = 0; i < operatoRs.size(); i++) {
        if (operatoRs[i] == "+") {
            result += operanDs[i+1];
        } else if (operatoRs[i] == "-") {
            result -= operanDs[i+1];
        } else if (operatoRs[i] == "*") {
            result *= operanDs[i+1];
        } else if (operatoRs[i] == "//") {
            result /= operanDs[i+1];
        } else if (operatoRs[i] == "**") {
            result = pow(result, operanDs[i+1]);
        }
    }

    return result;
}