#include <vector>
#include <string>
#include <algorithm>
#include <cassert>

using namespace std;

bool is_same(vector<int> a, vector<int> b){
    return a == b;
}

vector<int> parse_nested_parens(string paren_string){
    vector<int> result;
    int max_depth = 0;
    int depth = 0;
    for(char c : paren_string){
        if(c == '('){
            depth++;
            max_depth = max(max_depth, depth);
        } else if(c == ')'){
            depth--;
        } else if(c == ' '){
            result.push_back(max_depth);
            max_depth = 0;
            depth = 0;
        }
    }
    result.push_back(max_depth);
    return result;
}

int main(){
    assert(is_same(parse_nested_parens("(()(())((())))"), {4}));
    return 0;
}