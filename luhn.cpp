vector<string> get_digits() {
    vector<string> digits;
    ifstream file("input.txt"); // Replace "input.txt" with the actual name of your input file
    string input;
    while (getline(file, input)) {
        digits.push_back(input);
    }
    return digits;
}