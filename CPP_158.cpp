string find_max(vector<string> words){
    string max_word = *max_element(words.begin(), words.end(),
        [&] (const string& s1, const string& s2) {
            int count1 = 0;
            int count2 = 0;
            for(char c : s1) {
                if(find(s1.begin(), s1.end(), c) == s1.end()) {
                    break;
                }
                count1++;
            }
            for(char c : s2) {
                if(find(s2.begin(), s2.end(), c) == s2.end()) {
                    break;
                }
                count2++;
            }
            if(count1 > count2) return true;
            else if(count1 < count2) return false;
            else return s1 < s2;
    });
    return max_word;
}