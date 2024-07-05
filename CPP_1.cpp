```cpp
#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool issame(vector<vector<string>> a,vector<vector<string>>b){
    if(a.size() != b.size())return false;
    for(int i=0; i<a.size(); i++){
        vector<string> tempA = a[i];
        vector<string> tempB = b[i];
        sort(tempA.begin(),tempA.end());
        sort(tempB.begin(),tempB.end());
        if(tempA!=tempB)return false;
    }
    return true;
}

vector<vector<string>> separate_paren_groups(string paren_string) {
    vector<vector<string>> result;
    int open_count = 0;
    string current_group;

    for (char c : paren_string) {
        if (c == '(') {
            open_count++;
            current_group += c;
        } else if (c == ')') {
            open_count--;
            current_group += c;
            if (open_count == 0) {
                result.push_back({{current_group.substr(1,current_group.length()-2)},current_group});
                current_group.clear();
            }
        }
    }

    return result;
}

int main(){
    assert(issame({{{""}, {{"", "()"}},{{"", "(())"}}}}, separate_paren_groups("( ) (( )) (( )( ))")));
    return 0;
}