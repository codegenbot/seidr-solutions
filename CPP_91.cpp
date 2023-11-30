int is_bored(string S){
    int count = 0;
    string delimiter = ".?!";

    size_t pos = 0;
    while ((pos = S.find_first_of(delimiter, pos)) != string::npos) {
        if (S[pos + 1] == 'I') {
            count++;
        }
        pos++;
    }

    return count;
}