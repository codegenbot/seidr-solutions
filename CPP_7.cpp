```cpp
bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size())
        return false;
    
    for (int i = 0; i < a.size(); i++) {
        if (find(b.begin(), b.end(), a[i]) == b.end())
            return false;
    }
    
    return true;
}

vector<string> filter_by_substring(vector<string> arr, string sub) {
    vector<string> result;
    for (auto s : arr) {
        if (s.find(sub) != string::npos)
            result.push_back(s);
    }
    return result;

int main() {
    int numSets;
    cin >> numSets;
    
    vector<vector<string>> sets(numSets);
    
    for (int i = 0; i < numSets; i++) {
        int numStrings;
        cin >> numStrings;
        
        sets[i].resize(numStrings);
        
        for (int j = 0; j < numStrings; j++) {
            cin >> sets[i][j];
        }
    }
    
    string subStr;
    cin >> subStr;
    
    vector<string> result;
    
    for (auto s : sets[0]) {
        if (issame(sets, s)) {
            result.push_back(s);
        }
    }
    
    cout << "The result is:" << endl;
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << endl;
    }
    
    return 0;
}