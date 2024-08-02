bool issame(vector<string> a, vector<string> b) {
    return sort(a.begin(), a.end()) == sort(b.begin(), b.end());
}

int main() {
    vector<string> strings;
    string input;
    
    while(getline(cin, input)) {
        strings.push_back(input);
    }
    
    string substring;
    getline(cin, substring);

    vector<string> result = filter_by_substring(strings, substring);

    if(issame(result, strings) || issame(result, vector<string>{substring})) {
        cout << "The resulting vector contains the same elements as the original or just the given substring." << endl;
    } else {
        cout << "The resulting vector does not contain the same elements as the original or just the given substring." << endl;
    }

    return 0;
}