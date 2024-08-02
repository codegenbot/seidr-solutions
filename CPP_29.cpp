```c++
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

int main(){
    int n;
    std::cin >> n;
    vector<string> strings(n);
    for(string &s : strings){
        cin >> s;
    }
    string prefix;
    cin >> prefix;
    vector<string> result = filter_by_prefix(strings, prefix);
    if(issame(result, strings))
        cout << "No elements were removed.\n";
    else
        cout << "The following elements were removed:\n";
    for(string s : strings){
        if(find(result.begin(), result.end(), s) == result.end())
            cout << s << "\n";
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