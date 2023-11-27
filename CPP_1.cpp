#include <iostream>
#include <vector>
#include <string>
#include <assert.h>

using namespace std;

vector<string> separate_paren_groups(string paren_string);
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
    if(a.size() != b.size()){
        return false;
    }
    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

int main() {
    assert (issame(separate_paren_groups("( ) (( )) (( )( ))") ,{"()", "(())", "(()())"}));

    cout << "Test cases passed successfully.\n";
    return 0;
}