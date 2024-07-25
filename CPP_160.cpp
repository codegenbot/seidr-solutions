#include <vector>
#include <cmath>

int do_algebra(vector<string> operator_, vector<int> operand) {
    int result = operand[0];
    for (int i = 0; i < operator_.size(); i++) {
        if (operator_[i] == "+") {
            result += operand[i + 1];
        } else if (operator_[i] == "-") {
            result -= operand[i + 1];
        } else if (operator_[i] == "*") {
            result *= operand[i + 1];
        } else if (operator_[i] == "//") {
            result = result / static_cast<int>(operand[i + 1]);
        } else if (operator_[i] == "**") {
            result = pow(result, operand[i + 1]);
        }
    }
    return result;
}

int main() {
    vector<string> operator_;
    vector<int> operand;

    // read input from user
    cin >> operand[0];
    for (int i = 0; i < 3; i++) {
        string s;
        cin >> s;
        operator_.push_back(s);
        int x;
        cin >> x;
        operand.push_back(x);
    }

    int result = do_algebra(operator_, operand);

    cout << "Result: " << result << endl;

    return 0;
}