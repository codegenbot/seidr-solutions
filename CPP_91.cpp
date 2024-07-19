int count = 0;
    bool is_bored_now = false;

    for (int i = 0; i < S.size(); ++i) {
        if (S[i] == 'I' && (i == 0 || S[i - 1] == '.' || S[i - 1] == '?' || S[i - 1] == '!')) {
            is_bored_now = true;
        } else if ((S[i] == '.' || S[i] == '?' || S[i] == '!') && is_bored_now) {
            ++count;
            is_bored_now = false;
        }
    }
    
    if (is_bored_now) {
        ++count;
    }

    return count;
}