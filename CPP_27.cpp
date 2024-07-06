int main() {
    string input;
    cout << "Enter a sentence: ";
    getline(cin, input);
    string output = flip_case(input);
    cout << "Flipped case: " << output << endl;
    return 0;
}