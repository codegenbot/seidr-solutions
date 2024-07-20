int main() {
    string input;
    getline(cin, input);
    vector<string> words = split_words(input);
    
    for (const auto& word : words) {
        cout << word << " ";
    }
    cout << endl;
    
    return 0;
}