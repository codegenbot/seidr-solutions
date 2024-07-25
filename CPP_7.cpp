bool issame(vector<string> a, vector<string> b){
    if(a.size() != b.size()){
        return false;
    }
    for(size_t i=0; i<a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

vector<string> filter_by_substring(vector<string> strings, string substring);

int main() {
    vector<string> strings = {"apple", "banana", "cherry", "date"};
    string substring = "an";
    vector<string> filtered_strings = filter_by_substring(strings, substring);
    
    vector<string> expected_result = {"banana", "cherry"};
    assert(issame(filtered_strings, expected_result));
    
    return 0;
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