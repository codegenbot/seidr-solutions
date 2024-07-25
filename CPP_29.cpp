bool issame(const string& str, const string& prefix) {
    return str.find(prefix) == 0;
}

vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> result;
    
    for (const auto& str : strings) {
        if (issame(str, prefix)) {
            result.push_back(str);
        }
    }
    
    return result;
}

int main() {
    vector<string> strings = {"apple", "banana", "apricot", "orange"};
    string prefix = "ap";
    
    vector<string> filtered_strings = filter_by_prefix(strings, prefix);
    
    for (const auto& str : filtered_strings) {
        cout << str << " ";
    }
    
    return 0;
}