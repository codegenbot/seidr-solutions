int is_bored(string S){
    int boredom_count = 0;
    size_t start = 0;
    while (start < S.size()) {
        start = S.find(".", start);
        if (start == string::npos) break;
        start++;
        size_t end = S.find_first_of(".!? ", start);
        string sentence = S.substr(start, end - start);
        if (sentence.substr(0, 2) == "I ") boredom_count++;
    }
    return boredom_count;
}