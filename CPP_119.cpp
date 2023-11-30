#include <iostream>
#include <vector>
#include <string>
#include <stack>
using namespace std;

string match_parens(vector<string> lst){
    stack<char> st;

    for(const auto& str : lst){
        for(const auto& c : str){
            if(c == '('){
                st.push(c);
            }
            else{
                if(st.empty()){
                    return "No";
                }
                st.pop();
            }
        }
    }

    if(st.empty()){
        return "Yes";
    }
    else{
        return "No";
    }
}