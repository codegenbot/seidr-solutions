bool issame(const vector<string> a, const vector<string> b){
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i]) return false;
    }
    return true;
}

vector<string> filter_by_substring(vector<string> strings, string substring);

int main(){
    vector<string> input_strings = {"apple", "banana", "apricot", "cherry"};
    string input_substring = "ap";
    vector<string> expected_output = {"apple", "apricot"};
    vector<string> output = filter_by_substring(input_strings, input_substring);
    
    if(issame(output, expected_output)){
        cout << "Test passed!" << endl;
    } else {
        cout << "Test failed!" << endl;
    }
    
    return 0;
}

vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> filtered_strings;
    for(const string& str : strings){
        if(str.find(substring) != string::npos){
            filtered_strings.push_back(str);
        }
    }
    return filtered_strings;
}