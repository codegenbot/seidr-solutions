string find_max(vector<string> words){
    string result = *max_element(words.begin(), words.end(),
        [](const string& a, const string& b) {
            int uniqueA = a.size() - count(a.begin(), a.end(), '*');
            int uniqueB = b.size() - count(b.begin(), b.end(), '*');
            if (uniqueA == uniqueB)
                return a < b;
            return uniqueA > uniqueB;
        });
    return result;
}