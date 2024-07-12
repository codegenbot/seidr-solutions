```cpp
string words_in_sentence(string sentence){
    string result;
    size_t strLen = sentence.size();
    for (const auto& word : split(sentence, " ")) {
        if (is_prime(word.length())) {
            result += word + " ";
        }
    }
    return result.substr(0, result.size() - 1);
}