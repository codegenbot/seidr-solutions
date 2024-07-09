int main() {
    int n;
    cout << "Enter the number of stones: ";
    cin >> n;
    vector<int> pile = make_a_pile(n);
    for (int i : pile) {
        cout << i << " ";
    }
    if(isSame(make_a_pile(8), {8, 10, 12, 14, 16, 18, 20, 22})) {
        cout << "\nThe piles are the same.\n";
    } else {
        cout << "\nThe piles are not the same.\n";
    }
    return 0;
}