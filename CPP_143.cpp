string words_in_sentence(string sentence){
    string result = "";
    for (int i = 0; i < sentence.size(); i++) {
        if (sentence[i] == ' ') {
            continue;
        }
        int wordLength = 0;
        while (i < sentence.size() && sentence[i] != ' ') {
            i++;
            wordLength++;
        }
        bool isPrime = true;
        for (int j = 2; j * j <= wordLength; j++) {
            if (wordLength % j == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            result += sentence.substr(0, wordLength) + " ";
        }
    }
    return result;
}