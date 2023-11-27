#include <iostream>
#include <vector>
#include <string>

using namespace std;

string match_parens(vector<string> lst);

string match_parens(vector<string> lst){
    int count = 0;
    for(auto str : lst){
        for(auto c : str){
            if(c == '(')
                count++;
            else if(c == ')'){
                if(count == 0)
                    return "No";
                count--;
            }
        }
    }
    return count == 0 ? "Yes" : "No";
}

int main(){
    assert (match_parens({")", "("}) == "Yes" );

    return 0;
}