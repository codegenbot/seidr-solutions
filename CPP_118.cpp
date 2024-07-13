string get_closest_vowel(string word) {
    for (int i = word.size() - 1; i >= 0; --i) {
        if (!ispunct(word[i]) && !isdigit(word[i])) { // skip punctuation and digits
            if (strchr("aeiouAEIOU", word[i])) { // check if character is a vowel
                string::iterator it = word.begin() + i;
                while (--it >= word.begin()) {
                    if (!ispunct(*it) && !isdigit(*it)) { // skip punctuation and digits
                        if (strchr("aeiouAEIOU", *it)) { // check if character is a vowel
                            return string(1, *it); // return the closest vowel
                        }
                    } else {
                        break; // exit the loop as we have found consonants on both sides
                    }
                }
            }
        } else {
            break; // exit the loop as we encounter punctuation or digit from right
        }
    }
    return ""; // if no vowel found, return empty string
}