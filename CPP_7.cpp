```cpp
#include <iostream>
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b){
    if(a.size() != b.size()) return false;
    for(auto& str : a){
        if(std::find(b.begin(),b.end(),str) == b.end()) return false;
    }
    return true;
}

int main(){
    int n;
    std::cout << "Enter the number of strings: ";
    std::cin >> n;
    
    vector<string> strings;
    for(int i=0; i<n; i++){
        string temp;
        cout << "Enter string " << i+1 << ": ";
        cin >> temp;
        strings.push_back(temp);
    }
    
    int m;
    cout << "Enter the number of substrings: ";
    cin >> m;
    
    vector<string> subs;
    for(int i=0; i<m; i++){
        string temp;
        cout << "Enter substring " << i+1 << ": ";
        cin >> temp;
        subs.push_back(temp);
    }
    
    vector<string> filtered = filter_by_substring(strings, subs[0]);
    
    bool same = issame(subs, filtered);
    
    if(same){
        cout << "The filtered strings are the same as the given substrings." << endl;
    } else {
        cout << "The filtered strings are different from the given substrings." << endl;
    }
    
    return 0;
}

vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> result;
    for(auto& str : strings){
        if(str.find(substring) != string::npos)
            result.push_back(str);
    }
    return result;
}