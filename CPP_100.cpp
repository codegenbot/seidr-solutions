int startProgram() {
    int n;
    cout << "Enter the number: ";
    cin >> n;
    vector<vector<int>> pile = make_a_pile(n);
    if (!isSame(pile, make_a_pile(n))) {
        cout << "Error: The two piles are not the same." << endl;
    }
    return 0;
}