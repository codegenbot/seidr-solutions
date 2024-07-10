#include <cassert>
#include <vector>
#include <algorithm>

bool issame(vector<string> a,vector<string>b){
    if(a.size() != b.size())return false;
    for(int i=0;i<a.size();i++){
        int sum1 = 0, sum2 = 0;
        for(char c : a[i])sum1 += c-'0';
        for(char c : b[i])sum2 += c-'0';
        if(sum1 != sum2)return false;
    }
    return true;
}

vector<string> sorted_list_sum(vector<string> lst) {
    auto it = lst.begin();
    while (it != lst.end()) {
        if (it->length() % 2 == 1) {
            it = lst.erase(it);
        } else {
            ++it;
        }
    }
    
    sort(lst.begin(), lst.end(),
         [](const string& a, const string& b) {
             if (a.length() != b.length()) {
                 return a.length() < b.length();
             } else {
                 return a < b;
             }
         });
    
    vector<string> result;
    for(string s : lst){
        int sum = 0;
        for(char c : s)sum += c-'0';
        if(sum == 0)result.push_back(s);
    }
    return result;
}