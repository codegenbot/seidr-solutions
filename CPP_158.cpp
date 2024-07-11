string find_max(vector<string> words){
    vector<string>::iterator it = max_element(words.begin(), words.end(),
        [](const string& a, const string& b) {
            return count(a.begin(), a.end(), tolower(a[0])) <
                   count(b.begin(), b.end(), tolower(b[0]));
        }
    );
    return *it;
}