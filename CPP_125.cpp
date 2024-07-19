#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b);

vector<string> split_words(string txt);

int main() {
    string input;
    getline(cin, input);
    vector<string> words = split_words(input);
    if(issame(words, {"hello", "world"})){
        cout << "The words are the same." << endl;
    } else {
        cout << "The words are different." << endl;
    }
    return 0;
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