int is_bored(string S){
    int count = 0;
    string sentence = "";
    for(char& c : S){
        if(c == '.' || c == '!' || c == '?'){
            if(sentence.substr(0, 2) == "I "){
                count++;
            }
            sentence = "";
        }
        else{
            sentence += c;
        }
    }
    if(sentence.size() >= 2 && sentence.substr(0, 2) == "I "){
        count++;
    }
    return count;
}