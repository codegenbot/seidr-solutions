int is_bored(string S){
    int count = 0;
    string sentence;
    
    for (char c : S) {
        sentence += c;
        if (c == '.' || c == '?' || c == '!') {
            if (sentence.find("I ") == 0) {
                count++;
            }
            sentence = "";
        }
    }
    
    return count;
}