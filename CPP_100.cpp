int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;
    vector<int> pile = make_a_pile(n);
    for (int stone : pile) {
        cout << stone << " ";
    }
    return 0;
}