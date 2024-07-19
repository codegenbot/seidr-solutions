#include <vector>
#include <cassert>

bool issame(const vector<int> a, const vector<int> b);

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

bool issame(const vector<int> a, const vector<int> b){
    return a == b;
}

int main(){
    vector<int> a = parse_nested_parens("((()))");
    vector<int> b = {1, 2, 3, 2, 1};
    assert(issame(a, b));
    return 0;
}  