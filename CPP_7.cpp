vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> result;
    for(auto& s : strings) {
        if(s.find(substring) != string::npos)
            result.push_back(s);
    }
    return result;
}

bool same(string s1, string s2) {
    return s1 == s2;
}

int main() {
    vector<string> words = {"apple", "banana", "apricot"};
    string target = "pp";
    
    vector<string> filtered_words = filter_by_substring(words, target);
    
    for(auto& word : filtered_words) {
        if(same(word, target)) {
            cout << "Same: " << word << endl;
        } else {
            cout << "Different: " << word << endl;
        }
    }
    
    return 0;
}