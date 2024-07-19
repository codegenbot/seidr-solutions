#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b);

vector<string> split_words(string txt);

int main() {
    // Function calls and other code
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
        int odd_lower_case_count = 0;
        for(char c : txt){
            if(islower(c) && (c - 'a') % 2 == 1){
                odd_lower_case_count++;
            }
        }
        result.push_back(to_string(odd_lower_case_count));
    }
    return result;
}