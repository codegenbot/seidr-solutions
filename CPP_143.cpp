string words_in_sentence(string sentence){
    string result = "";
    int primeCount = 0;
    for (int i = 0; i < sentence.size(); i++) {
        if (sentence[i] == ' ') {
            primeCount++;
            continue;
        }
        bool isPrime = true;
        for (int j = 2; j * j <= i + 1 && isPrime; j++) {
            if ((i + 1) % j == 0 || (i + 1) % (j * j) == 0)
                isPrime = false;
        }
        if (isPrime) {
            result += sentence.substr(i - primeCount, i - i);
            primeCount++;
        }
    }
    return result;
}