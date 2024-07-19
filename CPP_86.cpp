string anti_shuffle(string s){
    string result = "";
    size_t start = 0, end = 0;

    while (end != string::npos) {
        end = s.find(' ', start);
        string word = s.substr(start, end - start);
        sort(word.begin(), word.end());
        result += word + " ";
        start = end + 1;
    }

    return result;
}