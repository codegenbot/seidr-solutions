int main(){
    int n;
    cin >> n;
    vector<float> a(n), b(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
    }
    if(isSame(a, b)) cout << "The vectors are the same." << endl;
    else cout << "The vectors are not the same." << endl;
    return 0;
}

bool isSame(const vector<float>& a, const vector<float>& b) {
    return a.size() == b.size() && equal(a.begin(), a.end(), b.begin());
}