#include <vector>
#include <string>

using namespace std;

vector<string> split_words(string txt) {
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
        }
        else if(txt[i] == ','){
            hasComma = true;
            if(word != ""){
                result.push_back(word);
                word = "";
            }
        }
        else{
            word += txt[i];
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
    assert(issame(split_words(""), {"0"}));
    assert(issame(split_words("A B"), {"A", "B"}));
    assert(issame(split_words("Hello,World"), {"Hello", "World"}));
    assert(issame(split_words("Lorem ipsum dolor sit amet"), {"Lorem", "ipsum", "dolor", "sit", "amet"}));
    assert(issame(split_words("1,2,3,4,5"), {"1", "2", "3", "4", "5"}));
    
    return 0;
}