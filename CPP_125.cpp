#include <string>
#include <vector>

using namespace std;

vector<string> split_words(string txt);

bool isSame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
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
    
    for(int i = 0; i < txt.length(); i++){
        if(txt[i] == ' '){
            hasWhitespace = true;
            if(word != ""){
                result.push_back(word);
                word = "";
            }
        } else if(txt[i] == ','){
            hasComma = true;
            if(word != ""){
                result.push_back(word);
                word = "";
            }
        } else {
            word += txt[i];
        }
    }
    
    if(word != ""){
        result.push_back(word);
    }
    
    if(!hasWhitespace && !hasComma){
        result.clear();
        result.push_back(to_string(count_odd_letters(txt)));
    }
    
    return result;
}

int main() {
    vector<string> a = split_words("hello world");
    vector<string> b = split_words("hello,world");
    
    if (isSame(a, b)) {
        cout << "The vectors are the same" << endl;
    } else {
        cout << "The vectors are different" << endl;
    }
    
    return 0;
}