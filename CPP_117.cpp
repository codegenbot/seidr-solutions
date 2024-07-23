```cpp
vector<string> select_words(string s, int k) {
    vector<string> words;
    string temp = "";
    for(int i=0; i<s.length();i++){
        if(s[i] == ' ')
            continue;
        else{
            temp += s[i];
        }
    }
    for(int i=0; i<=temp.length();i+=k){
        if(i+k>temp.length())
            break;
        words.push_back(temp.substr(i,k));
    }
    return words;
}

bool isSame(vector<string> a, vector<string> b){
    if(a.size() != b.size())
        return false;
    for(int i=0; i<a.size();i++){
        if(a[i] != b[i])
            return false;
    }
    return true;
}