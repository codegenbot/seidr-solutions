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

vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> result;
    for(auto str : strings){
        if(str.find(substring) != string::npos){
            result.push_back(str);
        }
    }
    return result;
}

int main() {
    vector<string> test1 = {"apple", "banana", "orange"};
    vector<string> test2 = {"apple", "banana", "kiwi"};
    
    vector<string> filtered = filter_by_substring(test1, "a");
    assert(issame(filtered, vector<string>{"apple", "banana"}));
    
    filtered = filter_by_substring(test2, "a");
    assert(issame(filtered, vector<string>{"apple"}));
    
    return 0;
}