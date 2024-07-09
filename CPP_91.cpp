int is_bored(string S){
    int count = 0;
    string boredom = "I";
    size_t pos = 0;

    while((pos = S.find("I", pos)) != string::npos) {
        if (S.find('.', pos) == string::npos &&
            S.find('?', pos) == string::npos &&
            S.find('!', pos) == string::npos)
            count++;
        pos = S.find("I", pos + 1);
    }

    return count;
}