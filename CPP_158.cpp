string find_max(vector<string> words){
    string result = *max_element(words.begin(), words.end(),
        [](const string& a, const string& b) {
            int uniqueA = a.size() - std::count(a.begin(), a.end, ' ');
            int uniqueB = b.size() - std::count(b.begin(), b.end(), ' ');
            if(uniqueA > uniqueB) return true;
            else if(uniqueA < uniqueB) return false;
            return a < b;
        });
    return result;
}