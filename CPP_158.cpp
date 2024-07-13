string find_max(vector<string> words){
    string result = *max_element(words.begin(), words.end(),
        [](const string& a, const string& b) {
            int uniqueCountA = a.size() - count(a.begin(), a.end(), '*');
            int uniqueCountB = b.size() - count(b.begin(), b.end(), '*');
            if (uniqueCountA > uniqueCountB)
                return true;
            else if (uniqueCountA < uniqueCountB)
                return false;
            else
                return a < b;
        });
    return result;
}