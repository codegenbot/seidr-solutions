main() {
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence);
    
    string result = words_in_sentence(sentence);
    cout << "The output is: " << result << endl;
    
    return 0;
}