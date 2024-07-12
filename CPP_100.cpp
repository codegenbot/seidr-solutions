```int main() {
    int n;
    cout << "Enter the number of stones: ";
    cin >> n;
    vector<int> pile = make_a_pile(n);
    for (int i = 0; i < pile.size(); i++) {
        cout << pile[i] << " ";
    }
    return 0;
}```