#include <vector>
#include <string>

vector<string> split_words(string txt){
    vector<string> result;
    string word = "";
    bool hasWhitespace = false;
    bool hasComma = false;
    
    for(int i = 0; i < txt.length(); i++){
        if(txt[i] == ' '){
            hasWhitespace = true;
        }
        else if(txt[i] == ','){
            hasComma = true;
        }
        else{
            word += txt[i];
        }
        
        if((hasWhitespace && txt[i] == ' ') || (hasComma && txt[i] == ',')){
            result.push_back(word);
            word = "";
        }
    }
    
    if(word != ""){
        result.push_back(word);
    }
    
    if(result.empty()){
        result.push_back(to_string(3));
    }
    
    return result;
}

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    
    return true;
}

int main() {
    vector<string> words_1 = split_words("Hello,world");
    vector<string> words_2 = {"Hello", "world"};
    
    if (issame(words_1, words_2)) {
        cout << "The words are the same";
    } else {
        cout << "The words are different";
    }
    
    return 0;
}