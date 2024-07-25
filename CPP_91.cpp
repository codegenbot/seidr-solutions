int is_bored(string S){
    int count = 0;
    string boredom = "I";
    size_t pos = 0;
    while ((pos = S.find("I", pos)) != string::npos) {
        if (S.substr(pos, boredom.length()).compare(boredom) == 0) {
            count++;
            while (S[pos] != '.' && S[pos] != '?' && S[pos] != '!' && pos < S.length()) {
                pos++;
            }
        } else {
            pos = S.find("I", pos);
        }
    }
    return count;
}