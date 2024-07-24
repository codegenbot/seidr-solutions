if (!currentWord.empty()) {
    return result;
} else {
    int count = 0;
    for (char c : txt) {
        if (islower(c)) {
            count++;
        }
    }
    result.push_back(to_string(count));
}