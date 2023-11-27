#include <iostream>
#include <string>
#include <vector>

using namespace std;

int count_odd_letters(string txt);
vector<string> split_words(string txt);
bool is_same(vector<string> a, vector<string> b);

int count_odd_letters(string txt){
    int count = 0;
    for(int i = 0; i < txt.length(); i++){
        if(islower(txt[i])){
            int letterOrder = txt[i] - 'a';
            if(letterOrder % 2 != 0){
                count++;
            }
        }
    }
    return count;
}

vector<string> split_words(string txt){
    vector<string> result;
    string word = "";
    bool hasWhitespace = false;
    bool hasComma = false;
    
    for(int i = 0; i < txt.length(); i++){
        if(txt[i] == ' '){
            hasWhitespace = true;
            if(word != ""){
                result.push_back(word);
                word = "";
            }
        }
        else if(txt[i] == ','){
            hasComma = true;
            if(word != ""){
                result.push_back(word);
                word = "";
            }
        }
        else{
            word += txt[i];
        }
    }
    
    if(word != ""){
        result.push_back(word);
    }
    
    if(!hasWhitespace && !hasComma){
        result.push_back(to_string(count_odd_letters(txt)));
    }
    
    return result;
}

bool is_same(vector<string> a, vector<string> b){
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
    if (is_same(split_words(""), {"0"})) {
        cout << "Test case passed!" << endl;
    } else {
        cout << "Test case failed!" << endl;
    }
    
    return 0;
}