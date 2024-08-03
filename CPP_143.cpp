string words_in_sentence(string sentence){
    string result = "";
    int len = 0;
    for(int i=2; i<=100; i++){
        if(isPrime(i)){
            int j = 0;
            while(j < sentence.length()){
                len++;
                j += strlen(&sentence[j]);
                if(len == i) {
                    result += &sentence[j-1] + " ";
                    len = 0;
                    j = 0;
                }
            }
        }
    }
    return result;
}

bool isPrime(int n) {
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;
    return true;
}