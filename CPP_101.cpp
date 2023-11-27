vector<string> words_string(string s);
bool issame(vector<string> a, vector<string> b);

void assertEquals(vector<string> a, vector<string> b){
    if(a.size() != b.size()){
        cout << "Assertion Failed: Vectors have different sizes" << endl;
        return;
    }
    
    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i]){
            cout << "Assertion Failed: Vectors are not equal" << endl;
            return;
        }
    }
    
    cout << "Assertion Passed: Vectors are equal" << endl;
}

vector<string> words_string(string s){
    vector<string> words;
    string word = "";
    for(int i = 0; i < s.length(); i++){
        if(s[i] == ',' || s[i] == ' '){
            if(word != ""){
                words.push_back(word);
                word = "";
            }
        }
        else{
            word += s[i];
        }
    }
    if(word != ""){
        words.push_back(word);
    }
    return words;
}

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

int main(){
    assertEquals(words_string("ahmed     , gamal"), vector<string>{"ahmed", "gamal"});
    
    return 0;
}