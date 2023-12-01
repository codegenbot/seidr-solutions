#include <string>
#include <vector>

vector<string> split_words(string txt){
    vector<string> result;
    string word = "";
    
    for(char c : txt){
        if(c == ' ' || c == ','){
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
    
    vector<string> a;
    vector<string> b;
    
    for(int i=0; i<words.size(); i++){
        if(i % 2 == 0){
            a.push_back(words[i]);
        }
        else{
            b.push_back(words[i]);
        }
    }
    
    bool same = issame(a, b);
    
    if(same){
        cout << "Same" << endl;
    }
    else{
        cout << "Different" << endl;
    }
    
    return 0;
}