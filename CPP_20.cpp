int cpp20_main(){
    int n;
    cin >> n;
    vector<float> a(n), b(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
    }
    if(is_same(a, b)) cout << "The vectors are the same." << endl;
    else cout << "The vectors are not the same." << endl;
    return 0;
}