int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    vector<int> result = even_odd_count(n);
    if(issame(even_odd_count(n),vector<int>{0,n})) {
        cout << "Even and odd counts are the same for " << n << endl;
    } else {
        cout << "Even count: " << result[0] << ", Odd count: " << result[1] << endl;
    }
    
    return 0;
}