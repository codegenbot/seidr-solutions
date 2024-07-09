string words_in_sentence(string sentence){
    string result = "";
    string word = "";
    string primes = "2357"; // prime numbers less than 10

    for (char c : sentence) {
        if (c == ' ') {
            if (primes.find(to_string(word.length())) != string::npos) {
                result += word + " ";
            }
            word = "";
        } else {
            word += c;
        }
    }

    if (primes.find(to_string(word.length())) != string::npos) {
        result += word;
    }

    return result;
}