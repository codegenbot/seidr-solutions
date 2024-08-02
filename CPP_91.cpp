int is_bored(string S) {
    int count = 0;
    string boredom = "I";
    size_t pos = 0;

    while ((pos = S.find('.', pos)) != string::npos || (pos = S.find('?', pos)) != string::npos || (pos = S.find('!', pos)) != string::npos) {
        if (S.substr(0, boredom.size()).compare(boredom) == 0) {
            count++;
        }
        pos += (pos < S.find('.') ? 1 : (S[pos] == '.' ? 2 : (S[pos] == '?' ? 2 : 3)));
    }

    return count;
}