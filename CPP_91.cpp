int is_bored(string S){
    int count = 0;
    size_t start = 0;
    while (start < S.size()) {
        size_t end = S.find('.', start);
        if (end == string::npos) {
            end = S.find('?', start);
            if (end == string::npos) {
                end = S.find('!', start);
                if (end != string::npos)
                    start = end + 1;
                else
                    break;
            } else {
                start = end + 1;
            }
        } else {
            start = end + 1;
        }
        if (S.substr(start, 2) == " I") {
            count++;
        }
    }
    return count;
}