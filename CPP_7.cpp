#include <vector>
#include <string>
#include <iostream>

using namespace std;

vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> result;
    for(const string& str : strings){
        if(str.find(substring) != string::npos){
            result.push_back(str);
        }
    }
    return result;
}

int main(){
    int n;
    cin >> n;
    vector<string> strings(n);
    for(int i=0; i<n; i++){
        cin >> strings[i];
    }
    string substring;
    cin >> substring;
    
    vector<string> filteredStrings = filter_by_substring(strings, substring);
    
    for(const string& s : filteredStrings){
        cout << s << endl;
    }
    
    return 0;
}