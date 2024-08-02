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
    int n;
    std::cin >> n;
    vector<string> strings(n);
    for(int i = 0; i < n; i++) std::cin >> strings[i];
    
    string prefix;
    std::cin >> prefix;
    
    vector<string> result = filter_by_prefix(strings, prefix);
    
    if(issame({prefix}, {result[0]}))
        cout << "Same\n";
    else
        cout << "Different\n";
    
    return 0;
}