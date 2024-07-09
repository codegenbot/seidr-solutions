string find_max(vector<string> words){
    string result = *max_element(words.begin(), words.end(),
        [](const string& a, const string& b) {
            return count(a.begin(), a.end(), a[0]) > count(b.begin(), b.end(), b[0]);
        });
    for (int i = 1; i < words.size(); i++) {
        if (count(result.begin(), result.end(), result[0]) == 
            count(words[i].begin(), words[i].end(), words[i][0])) {
            result = words[i];
        }
    }
    return result;
}