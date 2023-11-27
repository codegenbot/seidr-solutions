#include <vector>
#include <string>
#include <cassert>

bool issame(vector<string> a, vector<string> b);

vector<string> separate_paren_groups(string paren_string){
    vector<string> result;
    string current_group = "";
    int count = 0;
    
    for(int i=0; i<paren_string.length(); i++){
        if(paren_string[i] == '('){
            count++;
            current_group += paren_string[i];
        }
        else if(paren_string[i] == ')'){
            count--;
            current_group += paren_string[i];
            
            if(count == 0){
                result.push_back(current_group);
                current_group = "";
            }
        }
    }
    
    return result;
}

bool issame(vector<string> a, vector<string> b){
    // Function implementation here
    // ...
}

int main() {
    assert(issame(separate_paren_groups("( ) (( )) (( )( ))"), {"()", "(())", "(()())"}));

    return 0;
}