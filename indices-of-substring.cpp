for (int i = 0; i < textLen - targetLen + 1; ++i) {
    bool found = true;
    for (int j = 0; j < targetLen; ++j) {
        if (tolower(text[i + j]) != tolower(target[j])) {
            found = false;
            break;
        }
    }
    
    if (found) {
        indices.push_back(i);
    }
}