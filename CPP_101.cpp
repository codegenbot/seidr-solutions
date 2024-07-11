bool issame(vector<string> a, vector<string> b){
    return a == b;
}

vector<string> words_string(string s){
    vector<string> words;
    string word = "";
    for(char c : s){
        if(c == ' ' || c == ','){
            if(!word.empty()){
                words.push_back(word);
                word = "";
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

int main() {
    string input;
    getline(cin, input);
    vector<string> words = words_string(input);
    vector<string> b = {"apple", "banana", "cherry"};
    if(issame(words, b)){
        cout << "Two vectors are the same." << endl;
    } else {
        cout << "Two vectors are not the same." << endl;
    }
    return 0;
}