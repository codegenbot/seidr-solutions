string find_max(vector<string> words){
    string result = *max_element(words.begin(), words.end(),
        [](const string& a, const string& b) {
            int countA = a.size();
            int countB = b.size();
            if(countA == countB)
                return a < b;
            return countA > countB;
        });
    return result;
}