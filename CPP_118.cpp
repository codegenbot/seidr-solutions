Here is the solution:

string get_closest_vowel(string word) {
    string vowels = "aeiouAEIOU";
    int left = 0, right = word.size() - 1;
    
    while (left < right) {
        if (!isalpha(word[left])) {
            ++left;
        } else if (!isalpha(word[right])) {
            --right;
        } else if (vowels.find(toupper(word[right])) != string::npos) {
            return word.substr(left + 1, right - left);
        } else if (vowels.find(toupper(word[left])) != string::npos) {
            return word.substr(left, right - left + 1);
        }
    }
    
    return "";
}