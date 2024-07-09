string find_max(vector<string> words){
    string result = *max_element(words.begin(), words.end(),
        [](const string& s1, const string& s2) {
            int count1 = s1.length();
            int count2 = s2.length();
            if(count1 == count2) return s1 < s2;
            return count1 > count2;
    });
    return result;
}