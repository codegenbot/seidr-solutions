vector<string> words_string(string s){
    vector<string> words;
    string word = "";
    for(int i = 0; i < s.length(); i++){
        // If the character is a comma or a space, add the word to the vector and reset word.
        if(s[i] == ',' || s[i] == ' '){
            if(word != ""){
                words.push_back(word);
                word = "";
            }
        }
        // If the character is not a comma or a space, add it to the word.
        else{
            word += s[i];
        }
    }
    // Add the last word to the vector if it is not empty.
    if(word != ""){
        words.push_back(word);
    }
    return words;
}