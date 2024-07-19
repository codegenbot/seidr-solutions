bool issame(vector<string> a,vector<string>b){
    if (a.size() != b.size()) {
        return false;
    }
    for(int i=0; i<a.size();i++){
        if(a[i] != b[i])return false;
    }
    return true;
}

int main() {
    string s;
    cin >> s;
    vector<string> words = words_string(s);
    vector<string> more_words;
    cout << "Enter more words (space-separated): ";
    getline(cin, s);
    more_words = words_string(s);

    if (issame(words, more_words)) {
        cout << "The lists are the same." << endl;
    } else {
        cout << "The lists are different." << endl;
    }
    return 0;
}