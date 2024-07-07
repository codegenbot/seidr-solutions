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
    bool b = true; // declare and initialize the variable
    if(a.size() != b.size())
        b = false;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i])
            b = false;
    }
    return b;
}

int main() {
    vector<string> strings = {"abc", "abcd", "abcde"};
    string substring = "abc";
    
    vector<string> filteredStrings = filter_by_substring(strings, substring);
    bool areEqual = issame(filteredStrings, strings);
    
    if(areEqual)
        cout << "The filtered and original lists are the same." << endl;
    else
        cout << "The filtered list is different from the original list." << endl;
    
    return 0;
}