```cpp
vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> result;
    for(string s : strings){
        if(s.find(substring) != string::npos)
            result.push_back(s);
    }
    return result;
}

bool issame(vector<string> a, vector<string> b) {
    bool b = false; // declare and initialize
    for (int i = 0; i < a.size() && i < b.size(); i++) {
        if (!filter_by_substring(a, b[i]).empty()) {
            b = true;
            break;
        }
    }
    return b;
}

int main() {
    vector<string> strings = {"apple", "banana", "orange", "grape"};
    string substring = "an";
    vector<string> result = filter_by_substring(strings, substring);
    cout << "Strings containing the substring '" << substring << "' are: ";
    for (const auto& s : result) {
        cout << s << " ";
    }
    cout << endl;
    
    return 0;
}