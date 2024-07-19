#include <vector>
#include <string>
#include <cassert>

bool issame(vector<int> a, vector<int> b);
vector<int> parse_nested_parens(string paren_string);

vector<int> parse_nested_parens(string paren_string);

int main(){
    vector<int> a = parse_nested_parens("(()())");
    vector<int> b = {1, 2, 1, 2, 1, 1};
    assert(issame(a, b));
    
    return 0;
}

bool issame(vector<int> a, vector<int> b){
    return a == b;
}