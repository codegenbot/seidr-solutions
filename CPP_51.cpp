int main{
    string text;
    cout << "Enter a sentence: ";
    getline(cin, text);
    string output = remove_vowels(text);
    cout << "Sentence without vowels: " << output << endl;
    return 0;
}