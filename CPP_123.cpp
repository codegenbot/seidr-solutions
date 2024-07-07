int main {
    int input;
    cout << "Enter a number: ";
    cin >> input;
    if(input < 0) {
        cout << "Invalid input. Please enter a non-negative integer." << endl;
        return -1;
    }
    vector<int> output = getOddCollatz(input);
    for (int num : output) {
        cout << num << " ";
    }
    assert(isSame(getOddCollatz(1), {1}));
    return 0;
}