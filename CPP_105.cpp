```
int main {
    vector<int> arr = {1,4,8};
    vector<vector<string>> result = by_length(arr);
    
    for (int i = 0; i < 10; i++) {
        if (!result[i].empty()) {
            cout << "Length " << i << ": ";
            for (string s : result[i]) {
                cout << s << " ";
            }
            cout << endl;
        } else {
            cout << "Length " << i << ": empty" << endl;
        }
    }
}