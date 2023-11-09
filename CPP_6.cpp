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
   int max_level = 0;
   int current_level = 0;
   for(int i = 0; i < paren_string.length(); i++){
      if(paren_string[i] == '('){
         current_level++;
         if(current_level > max_level){
            max_level = current_level;
         }
      }
      else if(paren_string[i] == ')'){
         current_level--;
      }
      else{
         result.push_back(max_level);
         max_level = 0;
         current_level = 0;
      }
   }
   result.push_back(max_level);
   return result;
}
