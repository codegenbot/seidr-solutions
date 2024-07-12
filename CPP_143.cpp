```cpp
string words_in_sentence(string sentence) {
    if(sentence.empty()) {
        return ""; 
    }
    istringstream ss(sentence);
    string word;
    int count = 0;
    while (getline(ss, word, ' ')) {
        if (count == 1)
            return word;
        ++count;
    }
    return "";
}