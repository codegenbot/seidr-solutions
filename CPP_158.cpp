Here is the solution:

string find_max(vector<string> words){
    string res = *max_element(words.begin(), words.end(), 
        [](const string &a, const string &b) {
            return count(a.begin(), a.end(), unique_copy(a.begin(), a.end())) <
                count(b.begin(), b.end(), unique_copy(b.begin(), b.end()));
        });
    return res;
}