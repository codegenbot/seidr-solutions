string result = "";
    string word = "";
    int n = sentence.length();
    int primes[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};

    for (int i = 0; i < n; i++) {
        if (sentence[i] == ' ' || i == n - 1) {
            if (i == n - 1)
                word += sentence[i];
            if (find(begin(primes), end(primes), word.length()) != end(primes)) {
                result += word + " ";
            }
            word = "";
        } else {
            word += sentence[i];
        }
    }

    return result;
}