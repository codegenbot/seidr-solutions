#include <map>

map<char,int> histogram(string test);

bool issame(const map<char,int>& a, const map<char,int>& b);

int main() {
    string test;
    getline(cin, test);
    map<char, int> result = histogram(test);
    // TODO: Call issame function and perform necessary operations
    return 0;
}

map<char,int> histogram(string test){
    map<char, int> result;
    if(test.empty()){
        return result;
    }
    string word;
    for(int i=0; i<test.length(); i++){
        if(test[i] != ' '){
            word += test[i];
        }
        else{
            result[word]++;
            word = "";
        }
    }
    result[word]++;
    return result;
}

bool issame(const map<char,int>& a, const map<char,int>& b) {
    // TODO: Implement the issame function
}