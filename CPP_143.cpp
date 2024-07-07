int main() {
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence);
    
    string result = words_in_sentence(sentence);
    if (!result.empty()) {
        cout << "Words with prime length: " << result << endl;
    } else {
        cout << "No words have prime length." << endl;
    }
    
    return 0;
}