string get_closest_vowel(string word) {
    int i = 0;
    while (i < word.size()) {
        if (!isalpha(word[i])) {
            break;
        }
        i++;
    }

    string left = word.substr(i);
    int closest_index = -1;
    for (char c : left) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            closest_index = left.find(c);
            break;
        }
    }

    if (closest_index != -1) {
        return string(1, left[closest_index]);
    } else {
        return "";
    }
}