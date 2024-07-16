#include<stdio.h>
#include<vector>
#include<string>
using namespace std;
vector<string> separate_paren_groups(string paren_string){
    vector<string> result;
    string group;
    bool inGroup = false;

    for (char c : paren_string) {
        if (c == '(') {
            inGroup = true;
            group = c;
        } else if (c == ')') {
            group += c;
            result.push_back(group);
            group = "";
            inGroup = false;
        } else if (inGroup) {
            group += c;
        }
    }

    return result;
}