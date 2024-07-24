```cpp
#include <iostream>
#include <vector>
#include <string>

bool issame(vector<string> a,vector<string>b){
    if(a.size() != b.size())
        return false;
    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i])
            return false;
    }
    return true;
}

vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> result;
    for(auto str: strings){
        if(str.find(prefix) == 0)
            result.push_back(str);
    }
    return result;

}
int main() {
    int n;
    cin >> n;
    
    vector<string> words;
    for(int i = 0; i < n; i++) {
        string word;
        cin >> word;
        words.push_back(word);
    }

    string prefix;
    cin >> prefix;

    vector<string> filtered_words = filter_by_prefix(words, prefix);

    if(filtered_words.size() > 1 && issame(filtered_words[0], filtered_words[1])){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}