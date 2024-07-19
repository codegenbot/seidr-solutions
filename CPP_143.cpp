string words_in_sentence(string sentence){
    string result = "";
    int prime[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29};
    for(int i = 0; i < sentence.size(); i++){
        if(i > 0) result += " ";
        string word = "";
        while(sentence[i] != ' ' && i < sentence.size()){
            word += sentence[i];
            i++;
        }
        bool isPrime = false;
        for(int j = 0; j < 10; j++){
            if(atoi(word.c_str()) == prime[j]){
                result += word;
                isPrime = true;
                break;
            }
        }
        if(!isPrime) continue;
    }
    return result;
}