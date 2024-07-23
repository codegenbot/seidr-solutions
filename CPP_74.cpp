```cpp
bool issame(vector<string> a,vector<string>b){
    return (a==b);
}

int main() {
    assert(issame(total_match({"this"}, {}), {""}));
    vector<string> lst1;
    vector<string> lst2;

    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        string s;
        cin >> s;
        if(i < n/2) {
            lst1.push_back(s);
        } else {
            lst2.push_back(s);
        }
    }

    vector<string> result = total_match(lst1, lst2);

    for(const auto& str : result) {
        cout << str << endl;
    }

    return 0;
}