vector<string> select_words(string s, int n) {
    vector<string> result;
    string vowels = "aeiouAEIOU";
    size_t start = 0, end = 0;

    while ((end = s.find(' ', start)) != string::npos) {
        string word = s.substr(start, end - start);
        int consonant_count = count_if(word.begin(), word.end(), [&](char c){
            return !isspace(c) && vowels.find(c) == string::npos;
        });

        if (consonant_count == n) {
            result.push_back(word);
        }
        start = end + 1;
    }

    string word = s.substr(start);
    int consonant_count = count_if(word.begin(), word.end(), [&](char c){
        return !isspace(c) && vowels.find(c) == string::npos;
    });

    if (consonant_count == n) {
        result.push_back(word);
    }

    return result;
}