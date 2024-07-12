```
#include <iostream>
using namespace std;

std::vector<std::string> filter_by_prefix(std::vector<std::string> strings, std::string prefix) { 
    std::vector<std::string> result; 
    for(auto s : strings){ 
        if(s.find(prefix) == 0) 
            result.push_back(s); 
    } 
    return result;
}

int main() {
    int n;
    cin >> n;
    vector<string> strings;
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        strings.push_back(s);
    }
    string prefix;
    cin >> prefix;
    vector<string> result = filter_by_prefix(strings, prefix);
    for(auto s : result){
        cout << s << endl;
    }
    return 0;
}