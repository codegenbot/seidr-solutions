#include <string>
#include <vector>
using namespace std;

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
    if (a.size() != b.size()){
        return false;
    }
    
    for(int i=0; i<a.size(); i++){
        if (a[i] != b[i]){
            return false;
        }
    }
    
    return true;
}

int main(){
    string txt1, txt2;
    getline(cin, txt1);
    getline(cin, txt2);
    
    vector<string> words1 = split_words(txt1);
    vector<string> words2 = split_words(txt2);
    
    bool same = issame(words1, words2);
    
    if(same){
        cout << "Same";
    }
    else{
        cout << "Different";
    }
    
    return 0;
}