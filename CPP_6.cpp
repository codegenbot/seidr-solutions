#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

int parse_nested_parens(std::string s){
    int count = 0;
    int max_count = 0;
    for(char c : s){
        if(c == '('){
            count++;
            if(count > max_count){
                max_count = count;
            }
        }
        else if(c == ')'){
            count--;
        }
    }
    return max_count;
}

int main(){
    assert (issame(parse_nested_parens("(()(())((())))"), {4}));
    
    return 0;
}