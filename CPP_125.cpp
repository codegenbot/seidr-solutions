#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b);
vector<string> split_words(string txt);

bool issame(vector<string> a, vector<string> b){
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

vector<string> split_words(string txt){
    vector<string> result;
    string word = "";
    int count = 0;

    for(int i = 0; i < txt.length(); i++){
        if(txt[i] == ' ' || txt[i] == ','){
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
        result.push_back(to_string(count));
    }

    return result;
}