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
    bool b = false; // declare variable
    for(int i = 0; i < a.size(); i++) {
        if(a[i] == b[i]) {
            b = true;
        } else {
            b = false;
            break;
        }
    }
    return b;
}

int main() {
    vector<string> strings = {"apple", "banana", "cherry"};
    string substring = "an";
    vector<string> filtered_strings = filter_by_substring(strings, substring);
    if(filtered_strings.size() > 0) {
        vector<string> same_strings = {"banana"};
        bool is_same = issame({strings[0], strings[1]}, same_strings);
        cout << "Is 'apple' and 'banana' the same? " << (is_same ? "Yes" : "No") << endl;
    }
    return 0;
}