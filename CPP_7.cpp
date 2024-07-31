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
    vector<string> test_strings = {"apple", "banana", "cherry", "date", "elderberry"};
    string match = "berry";
    
    vector<string> filtered_strings = filter_by_substring(test_strings, match);
    
    for (const auto &str : filtered_strings) {
        if (is_same(str, match)) {
            cout << str << endl;
        }
    }

    return 0;
}