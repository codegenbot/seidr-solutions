string find_max(vector<string> words){
    string result = *max_element(words.begin(), words.end(),
        [](const string& s1, const string& s2) {
            int unique_count1 = s1.size() - count(s1.begin(), s1.end(), '*');
            int unique_count2 = s2.size() - count(s2.begin(), s2.end(), '*');
            if (unique_count1 == unique_count2)
                return s1 < s2;
            else
                return unique_count1 > unique_count2;
        });
    return result;
}