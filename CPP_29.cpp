#include <iostream>
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b){
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i]) return false;
    }
    return true;
}

int main(){
    vector<string> strings;
    string prefix;
    cout << "Enter the number of strings: ";
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        strings.push_back(s);
    }
    cout << "Enter the prefix: ";
    cin >> prefix;
    vector<string> result = filter_by_prefix(strings, prefix);
    
    if(result.size() > 0){
        bool same = issame({result[0]}, result);
        for(int i = 1; i < result.size(); i++){
            if(!same) break;
            same = (issame({result[i-1]}, result));
        }
        
        if(same) cout << "All strings have the same prefix." << endl;
        else cout << "Not all strings have the same prefix." << endl;
    }else{
        cout << "No strings found with the given prefix." << endl;
    }
    
    return 0;
}

vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> result;
    for(string s : strings){
        if(s.find(prefix) == 0)
            result.push_back(s);
    }
    return result;
}