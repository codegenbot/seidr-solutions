Here is the completed code:

string find_max(vector<string> words){
    string result = *min_element(words.begin(), words.end(), 
        [&](const string& a, const string& b) {
            int countA = 0;
            int countB = 0;
            for (char c : a) {
                if (!isalnum(c))
                    continue;
                if (c >= 'a' && c <= 'z') {
                    countA++;
                    continue;
                }
                if (c >= 'A' && c <= 'Z') {
                    countA++;
                    continue;
                }
                if (isdigit(c)) {
                    countA++;
                    continue;
                }
            }
            for (char c : b) {
                if (!isalnum(c))
                    continue;
                if (c >= 'a' && c <= 'z') {
                    countB++;
                    continue;
                }
                if (c >= 'A' && c <= 'Z') {
                    countB++;
                    continue;
                }
                if (isdigit(c)) {
                    countB++;
                    continue;
                }
            }
            return tie(countA, a) < tie(countB, b);
        });
    return result;
}