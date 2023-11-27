vector<string> words_string(string s);

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

int main() {
    assertEquals(words_string("ahmed     , gamal"), vector<string>{"ahmed", "gamal"});
    return 0;
}