```
vector<string> sorted_list_sum(vector<string> lst) {
    vector<string> result;
    
    for (const auto& str : lst) {
        if (str.length() % 2 == 0) {
            result.push_back(str);
        }
    }
    
    sort(result.begin(), result.end(),
         [](const string& a, const string& b) {
             if (a.length() != b.length()) {
                 return a.length() < b.length();
             } else {
                 return a < b;
             }
         });
    
    return result;
}

int main() {
    vector<string> input;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        string s;
        cin >> s;
        input.push_back(s);
    }
    vector<string> output = sorted_list_sum(input);
    for(string str : output) {
        cout << str << endl;
    }
    return 0;
}