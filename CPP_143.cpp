string words_in_sentence(string sentence) {
    string result = "";
    int primeCount = 0;

    for (int i = 0; i < sentence.size(); i++) {
        if (sentence[i] == ' ') {
            continue;
        }

        int wordLength = 0;
        while (i < sentence.size() && sentence[i] != ' ') {
            i++;
            wordLength++;
        }
        string word = sentence.substr(0, wordLength);
        sentence.erase(0, wordLength);

        if (isPrime(wordLength)) {
            result += word + " ";
            primeCount++;
        }
    }

    return result;
}

bool isPrime(int num) {
    if (num <= 1)
        return false;

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}