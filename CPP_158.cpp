Here is the completed code:

string find_max(vector<string> words){
    string result = *minmax_element(words.begin(), words.end(),
        [](const string& a, const string& b) {
            int uniqueCountA = a.length() - count_if(a.begin(), a.end(), ::islower);
            int uniqueCountB = b.length() - count_if(b.begin(), b.end(), ::islower);
            return make_pair(uniqueCountA, 0) < make_pair(uniqueCountB, 0);
        }).first;
    return result;
}