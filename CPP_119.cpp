#include <string>
#include <vector>
#include <stack>
using namespace std;

string match_parens(vector<string> lst){
    stack<char> st;
    for(string s : lst){
        for(char c : s){
            if(c == '('){
                st.push(c);
            }
            else if(c == ')'){
                if(st.empty() || st.top() != '('){
                    return "No";
                }
                st.pop();
            }
        }
    }
    if(st.empty()){
        return "Yes";
    }
    return "No";
}