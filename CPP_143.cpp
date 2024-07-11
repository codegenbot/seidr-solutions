string words_in_sentence(string sentence){
    string result = "";
    int i = 0;
    
    while(i < sentence.length()){
        int j = i + 1;
        
        while(j <= sentence.length() && !ispunct(sentence[j])){
            j++;
        }
        
        if(j > i){
            string word = sentence.substr(i, j - i);
            
            for(int k = 2; k*k <= (int)word.length(); k++){
                if((int)word.length() % k == 0){
                    break;
                }
            }
            
            if(k * k > (int)word.length()){
                result += word + " ";
            }
        }
        
        i = j;
    }
    
    return result.substr(0, result.length()-1);
}