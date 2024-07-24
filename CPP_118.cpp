string vowels = "aeiouAEIOU";
    int closestIndex = -1;
    for (int i = word.length() - 2; i > 0; --i) {
        if (vowels.find(word[i]) != string::npos) {
            closestIndex = i;
            break;
        }
    }
    if (closestIndex == -1) {
        return "";
    } else {
        return string(1, word[closestIndex]);
    }
}