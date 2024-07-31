#include <string>

bool issame(vector<string> a, vector<string> b){
    return a == b;
}

vector<string> split_words(string txt){
    vector<string> result;
    string word = "";
    
    for(char c : txt){
        if(c == ' ' || c == ','){
            if(!word.empty()){
                result.push_back(word);
                word = "";
            }
        } else {
            word += c;
        }
    }
    
    if(!word.empty()){
        result.push_back(word);
    }
    
    if(result.size() == 1 && !isalpha(result[0][0])){
        int count = 0;
        for(char c : result[0]){
            if(islower(c) && (c - 'a') % 2 == 1){
                count++;
            }
        }
        result[0] = to_string(count);
    }
    
    return result;
}

int main() {
    assert(issame(split_words(""), {"0"}));
    // More test cases can be added here
    return 0;
}