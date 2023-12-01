#include <string>
#include <vector>
using namespace std;

vector<string> split_words(string txt){
    vector<string> result;
    string word = "";
    bool hasWhitespace = false;
    bool hasComma = false;
    
    for(char c : txt){
        if(c == ' '){
            hasWhitespace = true;
            if(word != ""){
                result.push_back(word);
                word = "";
            }
        }
        else if(c == ','){
            hasComma = true;
            if(word != ""){
                result.push_back(word);
                word = "";
            }
        }
        else{
            word += c;
        }
    }
    
    if(word != ""){
        result.push_back(word);
    }
    
    if(result.empty()){
        result.push_back(to_string(3));
    }
    
    return result;
}

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
    string txt;
    getline(cin, txt);
    vector<string> words = split_words(txt);
    
    vector<string> ab = {"a", "b"};
    vector<string> xy = {"x", "y"};
    
    bool is_ab_same = issame(ab, words);
    bool is_xy_same = issame(xy, words);
    
    if(is_ab_same){
        cout << "ab" << endl;
    }
    else if(is_xy_same){
        cout << "xy" << endl;
    }
    else{
        cout << "Not equal" << endl;
    }
    
    return 0;
}