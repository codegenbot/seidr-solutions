int is_bored(string S){
    int count = 0;
    string delimiter = ".?!";
    size_t pos = 0;
    string token;

    while ((pos = S.find_first_of(delimiter)) != string::npos) {
        token = S.substr(0, pos);
        if (token.compare(0, 2, "I ") == 0) {
            count++;
        }
        S.erase(0, pos + 1);
    }

    if (S.compare(0, 2, "I ") == 0) {
        count++;
    }

    return count;
}