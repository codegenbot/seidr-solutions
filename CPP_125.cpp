#include <vector>
#include <string>
#include <cctype>
#include <cassert>

using namespace std;

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
    return result;
}

int main(){
    assert(split_words("") == vector<string>{"0"});
    assert(split_words("Hello, World") == vector<string>{"Hello", "World"});
    assert(split_words("a e i o u") == vector<string>{"a", "e", "i", "o", "u"});
    assert(split_words("tEsT") == vector<string>{"tEsT"});
    assert(split_words("cpp 125") == vector<string>{"cpp", "125"});
    return 0;
}