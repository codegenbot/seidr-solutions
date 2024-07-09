#include <string>
#include <vector>

vector<string> split_words(string txt);

bool issame(vector<string> a, vector<string> b) {
    if(a.size() != b.size()) 
        return false;
    for(int i = 0; i < a.size(); i++) 
        if(a[i] != b[i])
            return false;
    return true;
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
    if(result.empty()){
        int oddCount = 0;
        for(char c : txt){
            if(islower(c) && (c - 'a') % 2 == 1){
                oddCount++;
            }
        }
        result.push_back(to_string(oddCount));
    }
    return result;
}

int main() {
    // Test cases
    vector<string> test1 = split_words("hello,world");
    vector<string> test2 = split_words("cpp contest problem");
    vector<string> test3 = split_words("ABCD 1234");
    return 0;
}