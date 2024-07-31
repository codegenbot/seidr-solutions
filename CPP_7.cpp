bool is_same(string a, string b){
    return a == b;
}

vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> result;
    for (const auto& str : strings) {
        if (str.find(substring) != string::npos) {
            result.push_back(str);
        }
    }
    return result;
}

int main() {
    vector<string> strings = {"apple", "banana", "orange", "grape"};
    string sub = "an";
    
    vector<string> filtered_strings = filter_by_substring(strings, sub);
    
    for (const string& str : filtered_strings) {
        if (is_same(str, sub)) {
            cout << str << " contains substring " << sub << endl;
        }
    }
    
    return 0;
}
