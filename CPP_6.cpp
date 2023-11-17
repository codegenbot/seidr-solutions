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
	int max = 0;
	int current = 0;
	vector<int> result;
	for (int i = 0; i<paren_string.length(); i++){
		if (paren_string[i] == '('){
			current++;
			if (current>max)
				max = current;
		}
		else if (paren_string[i] == ')')
			current--;
		else if (paren_string[i] == ' '){
			result.push_back(max);
			max = 0;
			current = 0;
		}
	}
	result.push_back(max);
	return result;
}
