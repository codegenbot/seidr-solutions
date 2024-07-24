```cpp
bool issame(vector<string> a, vector<vector<int>> b){
    if(a.size()!=b.size())return false;
    for(int i=0;i<a.size();i++){
        string s = to_string(b[i][0]);
        if(s.size() != a[i].size())return false;
        for(int j=0;j<s.size();j++){
            if(s[j] != a[i][j])return false;
        }
    }
    return true;
}

vector<vector<int>> by_length(vector<int> numbers) {
    unordered_map<int, vector<int>> mapped;
    for (int num : numbers) {
        int length = to_string(num).size();
        if (!mapped.count(length))
            mapped[length].push_back(num);
        else
            mapped[length].push_back(num);
    }
    vector<vector<int>> result;
    for (auto& pair : mapped) {
        result.push_back(pair.second);
    }
    return result;
}

int main() {
    assert(issame(by_length({1, 4, 9}), {"One", "Four", "Nine"}));
    return 0;
}