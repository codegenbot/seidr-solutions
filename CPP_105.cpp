bool issame(vector<string> a, vector<string> b){
    if(a.size()!=b.size())return false;
    for(int i=0;i<a.size();i++){
        if(a[i] != b[i])return false;
    }
    return true;
}

vector<vector<int>> by_length(vector<int> numbers) {
    unordered_map<int, vector<int>> mapped;
    for (int num : numbers) {
        string str = to_string(num);
        if (!mapped.count(str.length()))
            mapped[str.length()].push_back(num);
        else
            mapped[str.length()].push_back(num);
    }
    vector<vector<int>> result;
    for (auto& pair : mapped) {
        result.push_back(pair.second);
    }
    return result;
}

int main() {
    assert(issame(vector<string>(by_length({9, 4, 1})), {"Nine", "Four", "One"}));
    return 0;
}