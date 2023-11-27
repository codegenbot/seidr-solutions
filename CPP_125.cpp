#include <vector>
#include <string>
#include <sstream>

using namespace std;

vector<string> split_words(string txt);
int count_odd_letters(string txt);

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
    bool hasWhitespace = false;
    bool hasComma = false;
    
    for(int i = 0; i < txt.size(); i++){
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

int count_odd_letters(string txt){
    int count = 0;
    for(int i = 0; i < txt.size(); i++){
        if(islower(txt[i])){
            int letterOrder = txt[i] - 'a';
            if(letterOrder % 2 != 0){
                count++;
            }
        }
    }
    return count;
}

int main() {
    // Add test cases here
    return 0;
}