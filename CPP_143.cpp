#include <string>
#include <cassert>

using namespace std;

string words_in_sentence(string sentence){
    string result = "";
    string word = "";
    for(int i=0; i<sentence.length(); i++){
        if(sentence[i] != ' '){
            word += sentence[i];
        } else {
            int len = word.length();
            bool isPrime = true;
            for(int j=2; j*j<=len; j++){
                if(len % j == 0){
                    isPrime = false;
                    break;
                }
            }
            if(isPrime && len > 1){
                result += word + " ";
            }
            word = "";
        }
    }
    int len = word.length();
    bool isPrime = true;
    for(int j=2; j*j<=len; j++){
        if(len % j == 0){
            isPrime = false;
            break;
        }
    }
    if(isPrime && len > 1){
        result += word;
    }
    return result;
}

int main(){
    assert (words_in_sentence("here is") == "is");
    return 0;
}