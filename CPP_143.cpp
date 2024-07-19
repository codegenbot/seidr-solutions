#include <iostream>
#include <string>
using namespace std;

bool is_prime(int n){
    if(n <= 1){
        return false;
    }
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

string words_in_sentence(string sentence);

int main(){
    string sentence;
    getline(cin, sentence);
    cout << words_in_sentence(sentence) << endl;
    return 0;
}

string words_in_sentence(string sentence){
    string result = "";
    string word = "";
    for(char c : sentence){
        if(c == ' '){
            if(is_prime(word.length())){
                result += word + " ";
            }
            word = "";
        } else {
            word += c;
        }
    }
    if(is_prime(word.length())){
        result += word;
    }
    return result;
}