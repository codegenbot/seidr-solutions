string words_in_sentence(string sentence) {
    string result = "";
    int wordCount = 0;

    for (int i = 0; i < sentence.length(); i++) {
        if (sentence[i] == ' ') {
            wordCount++;
        } else if (i == sentence.length() - 1) {
            int wordLength = sentence.length() - wordCount;
            bool isPrime = false;

            for (int j = 2; j * j <= wordLength; j++) {
                if (wordLength % j == 0) {
                    isPrime = false;
                    break;
                } else {
                    isPrime = true;
                }
            }

            if (isPrime) {
                result += sentence.substr(wordCount, wordLength) + " ";
            }
        }
    }

    return result;
}