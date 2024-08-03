bool issame(vector<string> a, vector<string> b);

vector<string> select_words(string s, int n);

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

int main() {
    string input;
    int n;
    
    getline(cin, input);
    cin >> n;
    
    vector<string> selected_words = select_words(input, n);
    
    // Additional code logic to generate another vector of strings for comparison
    vector<string> another_vector = {"example", "words", "to", "compare"};
    
    bool is_same = issame(selected_words, another_vector);
    
    if(is_same){
        cout << "Selected words are the same as the words to compare." << endl;
    }
    else{
        cout << "Selected words are different from the words to compare." << endl;
    }
    
    return 0;
}