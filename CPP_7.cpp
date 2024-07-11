#include <iostream>
#include <vector>
#include <algorithm>

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size())
        return false;
    
    for (int i = 0; i < a.size(); i++) {
        if (find(b.begin(), b.end(), a[i]) == b.end())
            return false;
    }
    
    return true;
}

vector<string> filter_by_substring(vector<string> arr, string sub) {
    vector<string> result;
    for (auto s : arr) {
        if (s.find(sub) != string::npos)
            result.push_back(s);
    }
    return result;

}
int main() {
    int n;
    cin >> n;
    
    vector<string> strngs(n);
    
    for(int i = 0; i < n ; i++){
        cin >> strngs[i];
    }
    
    string sub_str;
    cin >> sub_str;
    
    if(issame(strngs, filter_by_substring(strngs,sub_str))){
        cout << "Yes" << endl;
    } else{
        cout << "No" << endl;
    }
    
    return 0;
}