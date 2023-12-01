#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int do_algebra(vector<string> operator, vector<int> operand){
    int result = operand[0]; // Initialize result with the first operand

    for(int i = 0; i < operator.size(); i++){
        if(operator[i] == "+"){
            result += operand[i+1]; // Perform addition
        }
        else if(operator[i] == "-"){
            result -= operand[i+1]; // Perform subtraction
        }
        else if(operator[i] == "*"){
            result *= operand[i+1]; // Perform multiplication
        }
        else if(operator[i] == "//"){
            result /= operand[i+1]; // Perform floor division
        }
        else if(operator[i] == "**"){
            result = pow(result, operand[i+1]); // Perform exponentiation
        }
    }

    return result;
}

int main() {
    assert (do_algebra({"//", "*"}, {7, 3, 4}) == 8);
    // Additional function calls and assertions can be added here
    return 0;
}