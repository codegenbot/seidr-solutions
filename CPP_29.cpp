```cpp
bool issame(vector<string> a,vector<string>b){
    return a == b;
}

vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> result;
    for(string s : strings) {
        if(s.find(prefix) == 0 || issame(split(s,prefix), split(strings[0],prefix))) {
            result.push_back(s);
        }
    }
    return result;
}

vector<string> split(string str,string prefix){
    vector<string> words;
    string word = "";
    for(char c : str) {
        if(c == ' ') {
            words.push_back(word);
            word = "";
        } else {
            word += c;
        }
    }
    if(!word.empty()) {
        words.push_back(word);
    }
    return words;
}