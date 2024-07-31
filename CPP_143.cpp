string words_in_sentence(string sentence) {
    string result = "";
    int N = sentence.size();
    
    for (int i = 0, j = 0; j <= N; ++j) {
        if (j == N || sentence[j] == ' ') {
            string word = sentence.substr(i, j - i);
            int wordLength = word.size();
            
            bool isPrime = true;
            for (int k = 2; k * k <= wordLength; ++k) {
                if (wordLength % k == 0) {
                    isPrime = false;
                    break;
                }
            }
            
            if (wordLength > 1 && isPrime) {
                result += (result.empty() ? "" : " ") + word;
            }
            
            i = j + 1;
        }
    }
    
    return result;
}