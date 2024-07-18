int main() {
    int n;
    cin >> n;
    vector<int> result = get_odd_collatz(n);
    
    for(int num : result) {
        cout << num << " ";
    }
}