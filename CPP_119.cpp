#include <iostream>
#include <string>
#include <vector>
#include <cassert>

using namespace std;

string match_parens(vector<string> lst){
    string result = "Yes";
    int count = 0;
    for(string s : lst){
        for(char c : s){
            if(c == '('){
                count++;
            }
            else{
                count--;
            }
            if(count < 0){
                result = "No";
                break;
            }
        }
        if(count < 0){
            break;
        }
    }
    if(count != 0){
        result = "No";
    }
    return result;
}

int main(){
    assert(match_parens({")", "("}) == "Yes");
    return 0;
}