bool issame(string s1, string s2) {
    if (s1.length() % 2 == 0 && s2.length() % 2 == 0)
        return true;
    return false;
}

int main() {
    vector<string> lst;
    cin >> ws; // ignore whitespace characters
    string str;
    while(getline(cin, str) && !str.empty()) {
        lst.push_back(str);
    }
    vector<string> result = sorted_list_sum(lst);
    for (const auto& str : result) {
        if (!issame(str, "")) {  // Check if the length of the string is even
            cout << str << endl;
        }
    }
    return 0;
}