transform(str.begin(), str.end(), str.begin(), ::tolower);
    vector<bool> characters(26, false);
    int result = 0;
    for(char c : str) {
        int idx = c - 'a';
        if(idx >= 0 && idx < 26) {
            if(!characters[idx]) {
                characters[idx] = true;
                result++;
            }
        }
    }
    return result;
}