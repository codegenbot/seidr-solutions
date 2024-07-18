int main() {
    int n;
    cin >> n;
    vector<string> strings(n);
    for(int i = 0; i < n; ++i){
        cin >> strings[i];
    }

    cout << longest(strings) << endl;

    return 0;
}