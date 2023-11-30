string words_in_sentence(string sentence){
    string result = "";
    int n = sentence.length();
    int prime[101] = {0};
    prime[0] = prime[1] = 1;

    for(int i=2; i*i<=n; i++){
        if(prime[i] == 0){
            for(int j=i*i; j<=n; j+=i){
                prime[j] = 1;
            }
        }
    }

    int start = 0;
    for(int i=0; i<=n; i++){
        if(sentence[i] == ' ' || i == n){
            string word = sentence.substr(start, i-start);
            if(prime[word.length()] == 0){
                result += word + " ";
            }
            start = i+1;
        }
    }

    return result.substr(0, result.length()-1);
}