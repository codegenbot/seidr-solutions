```cpp
bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

int main() {
    vector<string> strings;
    string substring;

    cout << "Enter the list of strings (space separated): ";
    getline(cin, substring);
    strings = split(substring, ' ');

    cout << "Enter the substring: ";
    cin >> substring;

    vector<string> result = filter_by_substring(strings, substring);

    if (issame(result, strings))
        cout << "The resulting list is empty." << endl;
    else
        for (const auto& str : result)
            cout << str << endl;

    return 0;
}

vector<string> filter_by_substring(vector<string> strings, string substring) {
    vector<string> result;
    for (const auto& str : strings) {
        if(str.find(substring) != string::npos)
            result.push_back(str);
    }
    return result;
}

vector<string> split(string s, char c) {
    vector<string> result;
    string temp = "";

    for (char ch : s) {
        if(ch == c) {
            result.push_back(temp);
            temp = "";
        } else {
            temp += ch;
        }
    }

    result.push_back(temp);

    return result;
}