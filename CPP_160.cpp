#include <vector>
#include <string>
#include <cstdio>

int do_alpha(vector<string> operator_, vector<int> operand) {
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
    for(int i=1; i<operator_.size(); i++){
        if(operator_[i-1] == "*"){
            result *= operand[i];
        } else {
            result += operand[i];
        }
    }
    
    return result;
}

int main() {
    assert(do_alpha({"//", "*"}, {7, 3, 4}) == 8);
    return 0;
}