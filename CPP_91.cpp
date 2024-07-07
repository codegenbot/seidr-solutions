int is_bored(string S){
    int count = 0;
    string boredom = "I";
    size_t pos = 0;
    while ((pos = S.find("I", pos)) != string::npos) {
        if (S.substr(pos, boredom.length()).compare(boredom) == 0) {
            count++;
        }
        pos += boredom.length();
    }
    return count;
}