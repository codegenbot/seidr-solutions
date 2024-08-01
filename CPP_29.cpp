```cpp
#include <iostream>
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b){
    if(a.size() != b.size())
        return false;
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i])
            return false;
    }
    return true;
}

vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> result;
    for (string s : strings) {
        if (s.find(prefix) == 0)
            result.push_back(s);
    }
    return result;

int main(){
    int n;
    cin >> n;
    
    vector<string> strings;
    for(int i = 0; i < n; i++){
        string str;
        cin >> str;
        strings.push_back(str);
    }

    string prefix;
    cin >> prefix;

    vector<string> filtered_strings = filter_by_prefix(strings, prefix);

    if(issame(strings, filtered_strings)){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }

    return 0;
}