/*
Input to this function is a string represented multiple groups for nested parentheses separated by spaces.
For each of the group, output the deepest level of nesting of parentheses.
E.g. (()()) has maximum two levels of nesting while ((())) has three.

>>> parse_nested_parens("(()()) ((())) () ((())()())")
{2, 3, 1, 3}
*/
#include<stdio.h>
#include<vector>
#include<string>
using namespace std;
vector<int> parse_nested_parens(string paren_string){
	vector<int> result;
	int length = paren_string.length();
	int counter = 0;
	int deepest = 0;
	for (int i = 0; i < length; i++){
		if (paren_string[i] == '('){
			counter++;
			if (counter > deepest){
				deepest = counter;
			}
		}
		else if (paren_string[i] == ')'){
			counter--;
		}
		else if (paren_string[i] == ' '){
			result.push_back(deepest);
			deepest = 0;
			counter = 0;
		}
	}
	return result;
}
