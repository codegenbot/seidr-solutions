string words_in_sentence(string sentence){
    string result = "";
    string word = "";
    for (char c : sentence) {
        if (c != ' ') {
            word += c;
        } else {
            int len = word.size();
            bool isPrime = true;
            if (len <= 1) {
                isPrime = false;
            } else {
                for (int i = 2; i <= len / 2; i++) {
                    if (len % i == 0) {
                        isPrime = false;
                        break;
                    }
                }
            }
            if (isPrime) {
                result += word + " ";
            }
            word = "";
        }
    }
    int len = word.size();
    bool isPrime = true;
    if (len <= 1) {
        isPrime = false;
    } else {
        for (int i = 2; i <= len / 2; i++) {
            if (len % i == 0) {
                isPrime = false;
                break;
            }
        }
    }
    if (isPrime) {
        result += word;
    }
    return result;
}