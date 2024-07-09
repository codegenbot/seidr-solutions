string anti_shuffle(string s){
    string result = "";
    for(int i=0; i<s.length(); i++){
        if(s[i] == ' '){
            result += " ";
        }
        else{
            string word = "";
            for(int j=i; j<s.length() && s[j] != ' '; j++){
                word += s[j];
                int k = 0;
                while(k < word.length()){
                    bool found = false;
                    for(int l=k+1; l<word.length(); l++){
                        if(word[k] > word[l]){
                            swap(word[k], word[l]);
                            found = true;
                            break;
                        }
                    }
                    if(found) k++;
                    else break;
                }
            }
            result += word;
            i = j;
        }
    }
    return result;
}