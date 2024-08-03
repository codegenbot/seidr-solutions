int is_bored(string S){
    int count = 0;
    string boredom = "I";
    size_t start = 0;
    while ((start = S.find("I", start)) != string::npos) {
        if (S.substr(start, boredom.size()).compare(boredom) == 0) {
            count++;
            while (S[start] != '.' && S[start] != '?' && S[start] != '!' && S[start] != '\0') {
                start++;
            }
        } else {
            start++;
        }
    }
    return count;
}