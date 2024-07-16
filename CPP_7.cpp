bool issame(vector<string> a, vector<string> b){
    if(a.size() != b.size()){
        return false;
    }
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

vector<string> filter_by_substring(vector<string> strings, string substring);

vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> filtered_strings;
    for(const string& str : strings){
        if(str.find(substring) != string::npos){
            filtered_strings.push_back(str);
        }
    }
    return filtered_strings;
}

int main(){
    // Test cases
    vector<string> strings = {"apple", "banana", "cherry", "pineapple"};
    string substring = "apple";
    vector<string> filtered = filter_by_substring(strings, substring);
    for(const string& str : filtered){
        cout << str << " ";
    }
    return 0;
}