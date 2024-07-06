#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b){
    if(a.size() != b.size()) return false;
    for(int i=0; i<a.size(); ++i)
        if(a[i] != b[i]) return false;
    return true;
}

int main(){
    vector<string> strings = {"apple", "banana", "cherry", "date"};
    string substring = "e";
    vector<string> result = filter_by_substring(strings, substring);
    
    for(string s : result)
        cout << s << endl;
        
    return 0;
}

vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> result;
    for(string s : strings){
        if(s.find(substring) != string::npos)
            result.push_back(s);
    }
    return result;
}