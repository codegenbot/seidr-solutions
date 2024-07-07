string words_in_sentence(string sentence) {
    vector<int> wordLengths;
    string result = "";
    
    for (const auto& word : split(sentence, ' ')) {
        int length = word.length();
        bool isPrime = true;
        
        if (length > 1) {
            for (int i = 2; i * i <= length; ++i) {
                if (length % i == 0) {
                    isPrime = false;
                    break;
                }
            }
            
            if (isPrime) {
                wordLengths.push_back(length);
            }
        }
    }
    
    return ""; 
}