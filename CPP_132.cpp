#include <string>
#include <stack>
using namespace std;

bool is_nested(string str){
    stack<char> brackets;
    for(char c : str){
        if(c == '['){
            brackets.push(c);
        } else if(c == ']' && !brackets.empty()){
            brackets.pop();
        } else {
            return false;
        }
    }
    
    return brackets.empty();
}