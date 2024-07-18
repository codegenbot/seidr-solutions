vector<string> issame(vector<string> a, vector<string> b){
    vector<string> same_words;
    for(string word_a : a){
        for(string word_b : b){
            if(word_a == word_b){
                same_words.push_back(word_a);
                break;
            }
        }
    }
    return same_words;
}

vector<string> words_string(string s);

int main(){
    string input;
    getline(cin, input);
    vector<string> words = words_string(input);
    vector<string> words_duplicate = words;
    sort(words_duplicate.begin(), words_duplicate.end());
    words_duplicate.erase(unique(words_duplicate.begin(), words_duplicate.end()), words_duplicate.end());

    vector<string> result = issame(words, words_duplicate);
    for(string word : result){
        cout << word << " ";
    }
    cout << endl;

    return 0;
}

vector<string> words_string(string s){
    vector<string> words;
    string word;
    for(char c : s){
        if(c == ' ' || c == ','){
            if(!word.empty()){
                words.push_back(word);
                word.clear();
            }
        } else {
            word += c;
        }
    }
    if(!word.empty()){
        words.push_back(word);
    }
    return words;
}