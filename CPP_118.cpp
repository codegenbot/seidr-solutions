const string vowels = "AEIOUaeiou";

    int closestDistance = INT_MAX;
    char closestVowel = ' ';

    for (int i = word.length() - 2; i > 0; i--) {
        if (word[i] != ' ' && vowels.find(word[i]) != string::npos) {
            for (int j = i - 1; j > 0; j--) {
                if (word[j] != ' ' && vowels.find(word[j]) == string::npos) {
                    int distance = i - j;
                    if (distance < closestDistance) {
                        closestDistance = distance;
                        closestVowel = word[i];
                    }
                    break;
                }
            }
        }
    }

    if (closestVowel != ' ') {
        return string(1, closestVowel);
    } else {
        return "";
    }
}