int is_bored(string S){
    int count = 0;
    size_t pos = 0;
    while ((pos = S.find('.', pos)) != string::npos) {
        pos++;
        if (S.substr(0, pos).find("I") == 0) {
            count++;
        }
    }
    return count;
}