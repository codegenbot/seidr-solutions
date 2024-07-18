vector<string> issame(vector<string> a, vector<string> b){
    vector<string> same;
    for(string word1 : a){
        for(string word2 : b){
            if(word1 == word2){
                same.push_back(word1);
                break;
            }
        }
    }
    return same;
}

vector<string> words_string(string s);

int main(){
    string s;
    getline(cin, s);
    vector<string> words = words_string(s);
    for(string word : words){
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