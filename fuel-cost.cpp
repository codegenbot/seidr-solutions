int main() {
    vector<int> vec;
    int n;
    while (cin >> n) {
        vec.push_back(n);
    }
    
    int sum = 0;
    for (int num : vec) {
        sum += max(num / 3 - 2, 0);
    }
    
    cout << sum << endl;
    
    return 0;
}