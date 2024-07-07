int is_bored(string S){
    int count = 0;
    string boredom = "I";
    size_t pos = 0;

    while ((pos = S.find(". ", pos)) != string::npos) {
        if (S.substr(pos, boredom.length()).compare(boredom) == 0)
            ++count;
        pos += boredom.length() + 1;
    }

    return count;
}