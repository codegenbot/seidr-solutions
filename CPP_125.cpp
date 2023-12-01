#include <vector>
#include <string>

using namespace std;

vector<string> split_words(string txt){
    vector<string> result;
    string word = "";
    int count = 0;

    for(int i = 0; i < txt.length(); i++){
        if(txt[i] == ' ' || txt[i] == ','){
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

    if(result.empty()){
        result.push_back(to_string(count));
    }

    return result;
}