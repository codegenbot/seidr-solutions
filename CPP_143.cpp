string words_in_sentence(string sentence) {
    string result = "";
    int primes[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31}; // Predefined prime numbers up to 31

    int start = 0;
    int end = sentence.find(' ');

    while (end != string::npos) {
        string word = sentence.substr(start, end - start);
        if (find(begin(primes), end(primes), word.length()) != end(primes)) {
            result += word + " ";
        }
        start = end + 1;
        end = sentence.find(' ', start);
    }

    string lastWord = sentence.substr(start);
    if (find(begin(primes), end(primes), lastWord.length()) != end(primes)) {
        result += lastWord;
    }

    return result;
}