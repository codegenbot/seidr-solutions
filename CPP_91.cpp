int is_bored(string S) {
    int count = 0;
    size_t pos = 0;
    while ((pos = S.find('.', pos)) != string::npos || (pos = S.find('?', pos)) != string::npos || (pos = S.find('!', pos)) != string::npos) {
        if (S[pos + 1] == 'I' && (pos == 0 || S[pos - 1] == ' ')) {
            count++;
        }
        pos++;
    }
    return count;
}