/*
Given two vectors operator, and operand. The first vector has basic algebra operations, and 
the second vector is a vector of integers. Use the two given vectors to build the algebric 
expression and return the evaluation of this expression.

The basic algebra operations:
Addition ( + ) 
Subtraction ( - ) 
Multiplication ( * ) 
Floor division ( // ) 
Exponentiation ( ** ) 

Example:
operator{"+", "*", "-"}
vector = {2, 3, 4, 5}
result = 2 + 3 * 4 - 5
=> result = 9

Note:
    The length of operator vector is equal to the length of operand vector minus one.
    Operand is a vector of of non-negative integers.
    Operator vector has at least one operator, and operand vector has at least two operands.

*/
#include<stdio.h>
#include<math.h>
#include<vector>
#include<string>
using namespace std;
#include<algorithm>
#include<stdlib.h>
int do_algebra(vector<string> operato, vector<int> operand){
	int result = operand[0];
	for (int i = 0; i < operato.size(); i++){
		if (operato[i] == "+"){
			result = result + operand[i + 1];
		}
		else if (operato[i] == "-"){
			result = result - operand[i + 1];
		}
		else if (operato[i] == "*"){
			result = result * operand[i + 1];
		}
		else if (operato[i] == "//"){
			result = result / operand[i + 1];
		}
		else if (operato[i] == "**"){
			result = pow(result, operand[i + 1]);
		}
	}
	return result;
}
int main(){
	vector<string> operator_v = { "+", "*", "**" };
	vector<int> operand_v = { 2, 3, 4 };
	printf("%d\n", do_algebra(operator_v, operand_v));
}
