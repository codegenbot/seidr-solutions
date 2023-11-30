#include <iostream>
#include <stack>
using namespace std;

bool correct_bracketing(string brackets){
    stack<char> st;
    for(int i = 0; i < brackets.size(); i++){
        if(brackets[i] == '<'){
            st.push(brackets[i]);
        }
        else if(brackets[i] == '>'){
            if(st.empty()){
                return false;
            }
            st.pop();
        }
    }
    return st.empty();
}