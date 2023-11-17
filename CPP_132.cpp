/*
Create a function that takes a string as input which contains only square brackets.
The function should return true if and only if there is a valid subsequence of brackets
where at least one bracket in the subsequence is nested.

is_nested("[[]]") ➞ true
is_nested("[]]]]]]][[[[[]") ➞ false
is_nested("[][]") ➞ false
is_nested("[]") ➞ false
is_nested("[[][]]") ➞ true
is_nested("[[]][[") ➞ true
*/
#include<stdio.h>
#include<string>
using namespace std;
bool is_nested(string str){
    int len = str.length();
    if(len % 2 != 0)
        return false;
    int flag = 0;
    int count = 0;
    for(int i = 0; i < len; i++){
        if(str[i] == '[')
            count++;
        else if(str[i] == ']')
            count--;
        if(count < 0)
            return false;
        if(count == 0)
            flag = 1;
    }
    return flag;
}
