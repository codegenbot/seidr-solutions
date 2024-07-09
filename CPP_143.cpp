string words_in_sentence(string sentence){
    string result = "";
    size_t pos = 0;
    while((pos = sentence.find(" ")) != string::npos){
        string word = sentence.substr(0, pos);
        if(isPrime(word.length())){
            result += word + " ";
        }
        sentence.erase(0, pos+1);
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