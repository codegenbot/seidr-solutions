string find_max(vector<string> words){
    string result = *max_element(words.begin(), words.end(),
        [](const string& a, const string& b) {
            int countA = 0;
            for (char c : a) {
                if (count(c) == 1) {
                    countA++;
                }
            }
            int countB = 0;
            for (char c : b) {
                if (count(c) == 1) {
                    countB++;
                }
            }
            return make_pair(countA, a) < make_pair(countB, b);
        });
    return result;
}