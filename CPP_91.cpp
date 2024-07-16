int boredoms = 0;
    bool is_i = false;

    for (int i = 0; i < S.length(); ++i) {
        if (S[i] == 'I' && (i == 0 || S[i - 1] == '.' || S[i - 1] == '?' || S[i - 1] == '!')) {
            is_i = true;
        } else if (is_i && (S[i] == '.' || S[i] == '?' || S[i] == '!')) {
            boredoms++;
            is_i = false;
        }
    }

    return boredoms;
}