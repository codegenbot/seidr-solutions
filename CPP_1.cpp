#include <iostream>
#include <vector>
using namespace std;

bool issame(vector<string> a, vector<string> b){
    if(a.size() != b.size()){
        return false;
    }
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

vector<string> separate_paren_groups(string paren_string){
    vector<string> result;
    string temp;
    int count = 0;
    for(int i=0; i<paren_string.length(); i++){
        if(paren_string[i] == '('){
            count++;
            if(count == 1){
                temp += paren_string[i];
            }
        }
        else if(paren_string[i] == ')'){
            count--;
            if(count == 0){
                temp += paren_string[i];
                result.push_back(temp);
                temp = "";
            }
        }
    }
    return result;
}

int main() {
    // code to test the functions
    return 0;
}