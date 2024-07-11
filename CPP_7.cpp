```cpp
bool same(vector<string> strings1, vector<string> strings2, string substring){
    for(auto& s : strings1) {
        if(find(strings2.begin(), strings2.end(), s) != strings2.end() && s.find(substring) != string::npos)
            return true;
    }
    return false;
}

int main(){
    int n;
    cin >> n;
    vector<string> strings(n);
    for(int i = 0; i < n; i++){
        cin >> strings[i];
    }
    int m;
    cin >> m;
    vector<string> strings2(m);
    for(int i = 0; i < m; i++){
        cin >> strings2[i];
    }
    string substring;
    cin >> substring;
    if(same(strings, strings2, substring))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}