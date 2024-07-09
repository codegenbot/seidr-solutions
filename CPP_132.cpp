#include <string>
#include <stack>
using namespace std;

bool is_nested(string str){
    stack<char> st;
    for(char c : str){
        if(c == '['){
            st.push(c);
        } else if(c == ']' && !st.empty()){
            st.pop();
        } else {
            return false;
        }
    }
    
    return st.empty();
}