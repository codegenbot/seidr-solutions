#include <vector>
#include <cassert>

bool issame(vector<int> a, vector<int> b);

vector<int> parse_nested_parens(string paren_string);

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

vector<int> parse_nested_parens(string paren_string){
    vector<int> depths;
    int depth = 0;
    for(char c : paren_string){
        if(c == '('){
            depth++;
            depths.push_back(depth);
        } else if(c == ')'){
            depth--;
        }
    }
    return depths;
}

int main(){
    vector<int> a = parse_nested_parens("((((");
    vector<int> b = parse_nested_parens("()(()))");
    
    assert(issame(a, b));
    
    return 0;
}