int is_bored(string S){
    int boredom_count = 0;
    size_t start = 0;
    while (start < S.size()) {
        start = S.find('.', start) + 1;
        if (start >= S.size()) break;
        if (S.substr(start-1,2) == "I ") boredom_count++;
        else start = S.find('?', start);
        if (start >= S.size()) break;
        start = S.find('.', start) + 1;
    }
    return boredom_count;
}