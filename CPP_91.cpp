int is_bored(string S){
    int count = 0;
    size_t start = 0;
    while ((start = S.find("I", start)) != string::npos) {
        if (S[start] == 'I' && (S.find(".", start) != string::npos || 
                                S.find("?", start) != string::npos || 
                                S.find("!", start) != string::npos)) {
            count++;
        }
        start = S.find('.', start+1);
    }
    return count;
}