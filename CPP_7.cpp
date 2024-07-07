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
    bool b;
    for (int i = 0; i < a.size() && i < b.size(); i++) {
        if (a[i].compare(b[i]) != 0)
            return false;
    }
    return true;
}

int main() {
    vector<string> strings;
    string line;
    while(getline(cin, line)) {
        strings.push_back(line);
    }

    vector<string> substrings;
    string subline;
    while(getline(cin, subline)) {
        substrings.push_back(subline);
    }

    vector<string> result = filter_by_substring(strings, *max_element(substrings.begin(), substrings.end()));
    bool same = issame(result, strings);

    if(same) {
        cout << "The filtered list is the same as the original list." << endl;
    } else {
        cout << "The filtered list is different from the original list." << endl;
    }

    return 0;
}