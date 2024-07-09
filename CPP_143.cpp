Here is the solution:

string words_in_sentence(string sentence){
    string result = "";
    for (int i = 0; i < sentence.size(); i++) {
        if (sentence[i] == ' ') continue;
        int j = i + 1;
        while (j <= sentence.size() && sentence[j] != ' ') j++;
        string word = sentence.substr(i, j - i);
        bool is_prime = true;
        for (int k = 2; k * k <= word.length(); k++) {
            if (word.length() % k == 0) {
                is_prime = false;
                break;
            }
        }
        if (is_prime) result += word + " ";
    }
    return result.substr(0, result.size() - 1);
}