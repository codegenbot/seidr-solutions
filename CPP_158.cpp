Here is the completed code:

```cpp
string find_max(vector<string> words){
    string maxWord = *min_element(words.begin(), words.end(), 
        [](const string& a, const string& b){ 
            if(a.size() != b.size()) return a.size() < b.size();
            int uniqueCountA = a.size(), uniqueCountB = b.size();
            for(int i = 0; i < a.size(); i++){
                uniqueCountA -= (uniqueCountA > 0) && (a[i] == a[0]);
                uniqueCountB -= (uniqueCountB > 0) && (b[i] == b[0]);
            }
            return uniqueCountA <= uniqueCountB;
        });
    return maxWord;
}