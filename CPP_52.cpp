int main() {
    vector<int> l;
    int t;
    cin >> t; 
    l.resize(t);
    for(int i=0; i<t; i++) {
        cin >> l[i];
    }
    bool result = below_threshold(l, t);
    cout << (result ? "True" : "False"); 
    return 0;
}