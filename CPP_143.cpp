string words_in_sentence(string sentence){
    string result = "";
    string word = "";
    bool is_prime[101] = {false}; // to store prime numbers up to length 100

    // precompute prime numbers up to 100
    for (int i = 2; i <= 100; i++) {
        bool prime = true;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                prime = false;
                break;
            }
        }
        is_prime[i] = prime;
    }

    for (char c : sentence) {
        if (c == ' ') {
            if (is_prime[word.size()]) {
                result += word + " ";
            }
            word = "";
        } else {
            word += c;
        }
    }

    if (!word.empty() && is_prime[word.size()]) {
        result += word;
    }

    return result;
}