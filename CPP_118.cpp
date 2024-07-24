string vowels = "aeiouAEIOU";
    int closest_index = -1;
    for (int i = word.size() - 2; i > 0; --i) {
        if (vowels.find(word[i]) != string::npos && !isalpha(word[i+1]) && !isalpha(word[i-1])) {
            closest_index = i;
            break;
        }
    }
    if (closest_index != -1) {
        return string(1, word[closest_index]);
    } else {
        return "";
    }
}