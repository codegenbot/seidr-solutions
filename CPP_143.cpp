#include<string>
using namespace std;

string words_in_sentence(string sentence){
    string result = "";
    int n = 0;
    for(int i=2; ;i++){
        bool isPrime = true;
        for(int j=2;j*j<=i;j++)
            if(i%j==0)
                {isPrime=false;break;}
        if(isPrime){
            n=i;
            break;
        }
    }
    vector<string> words;
    string word;
    for(string s : split(sentence, " ")) {
        if(stoi(s) == n) {
            result += s + " ";
            words.push_back(s);
        }
    }
    return result.substr(0, result.length()-1);
}

vector<string> split(const string& str, char c) {
    vector<string> tokens;
    string token;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == c)
            tokens.push_back(token), token = "";
        else
            token += str[i];
    }
    tokens.push_back(token);
    return tokens;
}