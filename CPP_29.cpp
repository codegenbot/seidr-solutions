bool issame(vector<string> a, vector<string> b){
    return a == b;
}

vector<string> filter_by_prefix(vector<string> strings, string prefix); // Function declaration

vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> result;
    for(const auto& str : strings){
        if(str.find(prefix) == 0){
            result.push_back(str);
        }
    }
    return result;
}

int main() {
    vector<string> strings = {"apple", "banana", "grape", "orange"};
    string prefix = "gr";
    
    vector<string> filtered_strings = filter_by_prefix(strings, prefix);
    
    vector<string> expected_result = {"grape"};
    assert(issame(filtered_strings, expected_result));
    
    return 0;
}