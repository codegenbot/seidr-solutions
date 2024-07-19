bool issame(vector<string> a,vector<string>b){
    if (a.size() != b.size()) {
        return false;
    }
    for(int i=0; i<a.size();i++){
        if(a[i] != b[i])return false;
    }
    return true;
}

int main() {
    vector<string> words = words_string("Hello World, this is C++");
    bool same = issame(words, words);
    
    cout << "Are the two strings same? : " << same << endl;
    
    return 0;
}