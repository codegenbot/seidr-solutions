string words_in_sentence(string sentence){
    string result = "";
    int i = 0;
    while(i < sentence.size()){
        size_t pos = sentence.find(' ');
        if(pos != string::npos){
            string word = sentence.substr(0, pos);
            for(int j = 2; j <= sqrt((int)stoi(word)); j++){
                if(stoi(word) % j == 0)
                    break;
            }
            if(j > sqrt((int)stoi(word))){
                result += word + " ";
            }
            i = pos + 1;
        }else{
            for(int j = 2; j <= sqrt((int)stoi(sentence)); j++){
                if(stoi(sentence) % j == 0)
                    break;
            }
            if(j > sqrt((int)stoi(sentence))){
                result += sentence;
                return result;
            }
            i++;
        }
    }
    return result;
}