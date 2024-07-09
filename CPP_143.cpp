```cpp
std::vector<std::string> words_in_sentence(std::string sentence) {
    if (sentence.empty()) {
        return {};
    }
    std::vector<std::string> wordLengths; 
    std::string result = "";

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
                result += word + " ";
                wordLengths.push_back(std::to_string(length));
            }
        }
    }

    return wordLengths; 
}