#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b){
    if(a.size() != b.size())
        return false;
    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i])
            return false;
    }
    return true;
}

int main(){
    vector<string> strings;
    string prefix;
    cout << "Enter the list of strings: ";
    while(getline(cin, prefix)){
        strings.push_back(prefix);
    }
    
    cout << "Enter the prefix to filter by: ";
    getline(cin, prefix);
    
    vector<string> result = filter_by_prefix(strings, prefix);
    
    if(issame(result, strings))
        cout << "The filtered list is empty." << endl;
    else
        cout << "Filtered list: ";
    for(string s : result){
        cout << s << " ";
    }
    cout << endl;
    
    return 0;
}