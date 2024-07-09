int main() {
    int n;
    cin >> n;

    vector<string> lst(n);

    for(int i = 0; i < n; i++) {
        cin >> lst[i];
    }

    vector<string> output = odd_count(lst);
    displayOutput(output);

    return 0;
}