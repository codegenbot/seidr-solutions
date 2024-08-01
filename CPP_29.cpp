#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

vector<vector<string>> group_by_prefix(vector<string> strings) {
    map<string, vector<string>> result;
    for (const auto& str : strings) {
        string prefix = "";
        int i = 0;
        while (i < str.length() && str[i] != ' ') {
            prefix += str[i];
            i++;
        }
        if (result.find(prefix) == result.end()) {
            result[prefix] = vector<string>();
        }
        result[prefix].push_back(str);
    }
    vector<vector<string>> final_result;
    for (auto& pair : result) {
        final_result.push_back(pair.second);
    }
    return final_result;
}

int main() {
    int n;
    cin >> n;
    vector<string> strings(n);
    for (int i = 0; i < n; i++) {
        cin >> strings[i];
    }
    
    vector<vector<string>> result = group_by_prefix(strings);
    
    for (const auto& v : result) {
        if (!v.empty()) {
            cout << v[0];
            for (int i = 1; i < v.size(); i++) {
                cout << " " << v[i];
            }
            cout << endl;
        }
    }
    
    return 0;
}