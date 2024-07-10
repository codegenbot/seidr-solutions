string find_max(vector<string> words){
    string result = *min_element(words.begin(), words.end());
    for (const auto& word : words) {
        if (word.size() == result.size()) {
            int count1 = 0;
            int count2 = 0;
            set<char> set1(word.begin(), word.end());
            for (char c : set1) {
                count1++;
            }
            set<char> set2(result.begin(), result.end());
            for (char c : set2) {
                count2++;
            }
            if (count1 > count2) {
                result = word;
            } else if (count1 == count2 && word < result) {
                result = word;
            }
        }
    }
    return result;
}