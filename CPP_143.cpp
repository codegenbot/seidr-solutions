string words_in_sentence(string sentence){
    string result = "";
    for(int i=0; isPrime(atoi(&sentence[i])) && i<sentence.length();i=i+strlen(&sentence[i])+1){
        if(i<sentence.length())
            result += &sentence[i];
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