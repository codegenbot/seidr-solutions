string words_in_sentence(string sentence) {
    string result = "";
    string word = "";
    
    for (char c : sentence) {
        if (c != ' ') {
            word += c;
        } else {
            if (isPrime(word.length())) {
                result = result.empty() ? word : result + " " + word;
            }
            word = "";
        }
    }

    if (!word.empty() && isPrime(word.length())) {
        result = result.empty() ? word : result + " " + word;
    }

    return result;
}