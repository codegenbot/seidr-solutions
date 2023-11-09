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
    vector<int>::iterator it;
    it=operand.begin();
    int result=*it;
    it++;
    for(int i=0;i<operato.size();i++)
    {
        if(operato[i]=="+")
        {
            result=result+*it;
        }
        else if(operato[i]=="-")
        {
            result=result-*it;
        }
        else if(operato[i]=="*")
        {
            result=result*(*it);
        }
        else if(operato[i]=="//")
        {
            result=result/(*it);
        }
        else if(operato[i]=="**")
        {
            result=pow(result,(*it));
        }
        it++;
    }
    return result;
}
