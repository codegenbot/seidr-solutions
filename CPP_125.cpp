#include <string>
#include <vector>

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
    string txt1, txt2;
    getline(cin, txt1);
    getline(cin, txt2);
    
    vector<string> words1 = split_words(txt1);
    vector<string> words2 = split_words(txt2);
    
    if(isSame(words1, words2)){
        cout << "Same" << endl;
    } else {
        cout << "Different" << endl;
    }
    
    return 0;
}