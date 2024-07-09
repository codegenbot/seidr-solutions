string words_in_sentence(string sentence){
    string result = "";
    int count = 0;
    for (int i = 0; i < sentence.length(); i++) {
        if (sentence[i] == ' ') {
            count++;
        } else if (count > 0) {
            if (is_prime(atoi(&sentence[i]))){
                result += &sentence[i];
                while (&sentence[i] != ' ' && i < sentence.length()) i++;
                if(i < sentence.length() && sentence[i] == ' ') i++;
            }
        } else {
            if (is_prime(atoi(&sentence[i]))){
                result += &sentence[i];
                while (&sentence[i] != ' ' && i < sentence.length()) i++;
                if(i < sentence.length() && sentence[i] == ' ') i++;
            }
        }
    }
    return result;
}

int is_prime(int n) {
    if (n <= 1)
        return 0;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return 0;
    return 1;
}