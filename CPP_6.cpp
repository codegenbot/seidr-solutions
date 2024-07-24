#include <vector>
#include <cassert>

using namespace std;

vector<int> parse_nested_parens(string paren_string);
bool issame(vector<int> a, vector<int> b);

vector<int> parse_nested_parens(string paren_string){
    // Your function implementation here
}

bool issame(vector<int> a, vector<int> b){
    // Your function implementation here
}

int main() {
    assert(issame(parse_nested_parens("(()(())((())))"), {4}));
    
    return 0;
}