string words_in_sentence(string sentence){
    string result = "";
    int length;
    for(int i=0; i<sentence.length(); i++){
        if(sentence[i] == ' '){
            continue;
        }
        else{
            length = 0;
            while(i < sentence.length() && sentence[i] != ' '){
                i++;
                length++;
            }
            string word = sentence.substr(0, length);
            int num = stoi(word);
            bool isPrime = true;
            if(num > 1){
                for(int j=2; j*j<=num; j++){
                    if(num%j == 0){
                        isPrime = false;
                        break;
                    }
                }
            }else{
                isPrime = false;
            }
            if(isPrime){
                result += word + " ";
            }
        }
    }
    return result;
}