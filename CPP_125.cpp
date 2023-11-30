#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> split_words(string txt){
    vector<string> result;
    string word = "";
    bool hasWhitespace = false;
    bool hasComma = false;
    
    for(int i = 0; i < txt.length(); i++){
        if(txt[i] == ' '){
            hasWhitespace = true;
            if(word != ""){
                result.push_back(word);
                word = "";
            }
        } else if(txt[i] == ','){
            hasComma = true;
            if(word != ""){
                result.push_back(word);
                word = "";
            }
        } else {
            word += txt[i];
        }
    }
    
    if(word != ""){
        result.push_back(word);
    }
    
    if(!hasWhitespace && !hasComma){
        result.clear();
        result.push_back(to_string(count_odd_letters(txt)));
    }
    
    return result;
}

int count_odd_letters(string word){
    int count = 0;
    for(int i = 0; i < word.length(); i++){
        if(isalpha(word[i]) && tolower(word[i]) % 2 != 0){
            count++;
        }
    }
    return count;
}

bool isSame(vector<string> a, vector<string> b) {
    if(a.size() != b.size()){
        return false;
    }
    
    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    
    return true;
}

int main() {
    string txt;
    getline(cin, txt);
    
    vector<string> words = split_words(txt);
    
    if(isSame(words, {"the", "quick", "brown", "fox"})){
        cout << "Words are the same" << endl;
    } else {
        cout << "Words are different" << endl;
    }
    
    return 0;
}