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

vector<string> split_words(string txt);

int main(){
    vector<string> arr1 = split_words("Hello, World!");
    vector<string> arr2 = split_words("Hello World");
    
    if(issame(arr1, arr2)){
        cout << "Arrays are the same" << endl;
    }
    else{
        cout << "Arrays are different" << endl;
    }
    
    return 0;
}