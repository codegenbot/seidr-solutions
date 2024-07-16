string get_closest_vowel(string word){
    string vowels = "aeiouAEIOU";
    int closest_distance = word.size();
    int closest_index = -1;

    for (int i = word.size() - 2; i > 0; --i) {
        if (vowels.find(word[i]) != string::npos) {
            for (int j = i - 1; j > 0; --j) {
                if (vowels.find(word[j]) == string::npos) {
                    int distance = i - j;
                    if (distance < closest_distance) {
                        closest_distance = distance;
                        closest_index = i;
                    }
                    break;
                }
            }
        }
    }

    if (closest_index != -1) {
        return string(1, word[closest_index]);
    } else {
        return "";
    }
}