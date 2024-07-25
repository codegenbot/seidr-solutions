vector<string> sorted_list_sum(vector<string> lst){
    vector<string> result;
    for (const string& word : lst) {
        if (word.size() % 2 == 0) {
            result.push_back(word);
        }
    }
    sort(result.begin(), result.end(), [](const string& a, const string& b) {
        if (a.size() == b.size()) {
            return a < b;
        }
        return a.size() < b.size();
    });
    return result;
}