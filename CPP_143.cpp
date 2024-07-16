string words_in_sentence(string sentence){
    string result = "";
    int n = sentence.length();
    int is_prime[101] = {0};
    is_prime[0] = is_prime[1] = 1;
    for (int i = 2; i <= 100; ++i) {
        if (is_prime[i] == 0) {
            for (int j = i * i; j <= 100; j += i) {
                is_prime[j] = 1;
            }
        }
    }
    string word = "";
    for (int i = 0; i < n; ++i) {
        if (sentence[i] == ' ' || i == n - 1) {
            if (i == n - 1) {
                word += sentence[i];
            }
            if (is_prime[word.length()]) {
                result += word + " ";
            }
            word = "";
        } else {
            word += sentence[i];
        }
    }
    result.pop_back(); // Remove the extra space at the end
    return result;
}