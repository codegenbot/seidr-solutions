int main() {
    vector<int> vec;
    int n;
    while (cin >> n) {
        vec.push_back(n);
    }
    
    int sum = 0;
    for (int i = 0; i < vec.size(); ++i) {
        sum += (vec[i] / 3) - 2;
    }
    
    cout << sum << endl;
    
    return 0;
}