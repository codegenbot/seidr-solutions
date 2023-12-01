#include <string>
#include <vector>
#include <cassert>

using namespace std;

string match_parens(vector<string> lst);

string match_parens(vector<string> lst){
    string result = "Yes";
    int count = 0;

    for(string s : lst){
        for(char c : s){
            if(c == '('){
                count++;
            }
            else if(c == ')'){
                if(count == 0){
                    result = "No";
                    return result;
                }
                count--;
            }
        }
    }

    if(count != 0){
        result = "No";
    }

    return result;
}

int main(){
    assert (match_parens({")", "("}) == "Yes" );
}