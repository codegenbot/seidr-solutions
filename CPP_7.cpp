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

int main(){
    // Test cases
    vector<string> input = {"apple", "banana", "orange", "grape"};
    vector<string> expected_output = {"apple", "grape"};
    vector<string> actual_output = filter_by_substring(input, "ple");

    assert(issame(expected_output, actual_output));
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