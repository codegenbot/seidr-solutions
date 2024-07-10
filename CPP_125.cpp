vector<string> split_words(string input){
    if(input.empty()){
        return {"0"};
    }
    vector<string> words;
    string word = "";
    for(char c : input){
        if(c == ' '){
            words.push_back(word);
            word = "";
        } else {
            word += c;
        }
    }
    if(!word.empty()){
        words.push_back(word);
    }
    return words;
}

void assert_vector_equal(vector<string> a, vector<string> b){
    assert(a.size() == b.size());
    for(size_t i = 0; i < a.size(); ++i){
        assert(a[i] == b[i]);
    }
}

int main(){
    assert_vector_equal(split_words("") ,{"0"});
    // Add more test cases here

    return 0;
}