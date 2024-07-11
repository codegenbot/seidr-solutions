#include <string>
#include <vector>
using namespace std;

string match_parens(vector<string> lst){
    int open = 0, close = 0;
    for(const string& s : lst){
        for(char c : s){
            if(c == '('){
                open++;
            } else if(open > 0){
                open--;
            } else {
                close++;
            }
        }
    }
    
    if(open == 0 && close == 0 && close <= 1){
        return "Yes";
    } else {
        return "No";
    }
}