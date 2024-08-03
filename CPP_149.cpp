#include <bits/stdc++.h>

using namespace std;

bool issame(string s1,string s2){
    if(s1.length() != s2.length())
        return false;
    for(int i=0;i<s1.length();i++){
        if(s1[i] != s2[i])
            return false;
    }
    return true;
}

vector<string> sorted_list_sum(vector<string> lst) {
    vector<string> result = lst;
    for (auto it = result.begin(); it != result.end();) {
        if (it->length() % 2 == 1) {
            it = result.erase(it);
        } else {
            ++it;
        }
    }
    sort(result.begin(), result.end(), 
         [](const string& a, const string& b) {
             if (a.length() == b.length()) {
                 return a < b;
             } else {
                 return a.length() < b.length();
             }
         });
    return result;
}