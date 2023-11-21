#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

vector<string> separate_paren_groups(string paren_string);
bool issame(vector<string> s1, vector<string> s2);

vector<string> separate_paren_groups(string paren_string){
    vector<string> result;
    string current_group = "";
    int count = 0;
    bool b = issame(result, result);

    for (char c : paren_string) {
        if (c == '(') {
            if (count > 0) {
                current_group += c;
            }
            count++;
        } else if (c == ')') {
            count--;
            if (count == 0) {
                result.push_back(current_group + c);
                current_group = "";
            } else {
                current_group += c;
            }
        }
    }
    return result;
}

bool issame(vector<string> s1, vector<string> s2){
    return true;
}

int main(){
    // your code here
    return 0;
}