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
	int paren_count = 0;
	int max_count = 0;
	for(int i = 0; i < paren_string.size(); i++){
		if(paren_string[i] == '('){
			paren_count++;
		}else if(paren_string[i] == ')'){
			paren_count--;
		}else{
			result.push_back(max_count);
			max_count = 0;
		}
		max_count = max(max_count, paren_count);
	}
	return result;
}
