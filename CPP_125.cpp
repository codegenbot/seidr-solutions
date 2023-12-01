#include <string>
#include <vector>

vector<string> split_words(string txt){
    vector<string> result;
    string word = "";
    bool hasWhitespace = false;
    bool hasComma = false;
    
    for(char c : txt){
        if(c == ' '){
            hasWhitespace = true;
            if(word != ""){
                result.push_back(word);
                word = "";
            }
        }
        else if(c == ','){
            hasComma = true;
            if(word != ""){
                result.push_back(word);
                word = "";
            }
        }
        else{
            word += c;
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

bool issame(vector<string> a, vector<string> b){
    if(a.size() != b.size()){
        return false;
    }
    
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    
    return true;
}

int main(){
    string txt;
    getline(cin, txt);
    
    vector<string> words = split_words(txt);
    vector<string> reverse_words = words;
    reverse(reverse_words.begin(), reverse_words.end());
    
    if(issame(words, reverse_words)){
        cout << "The sentence is palindromic" << endl;
    }
    else{
        cout << "The sentence is not palindromic" << endl;
    }
    
    return 0;
}