#include <vector>
#include <string>
#include <cstdio>

int do_algebra(vector<string> operator_, vector<int> operand) {
    string expression = "";
    for (int i = 0; i < operator_.size(); i++) {
        if (i == 0)
            expression += to_string(operand[i]);
        else {
            expression += " ";
            expression += operator_[i];
            expression += " ";
            expression += to_string(operand[i]);
        }
    }

    int result = 0;
    string op = "";
    for(int i=0; i<operator_.size(); i++) {
        if(op == "+") {
            result += operand[i];
        } else if(op == "*") {
            result *= operand[i];
        }
        op = operator_[i];
    }
    
    return result;
}

int main() {
    assert(do_algebra({"//", "*"}, {7, 3, 4}) == 8);
    return 0;
}