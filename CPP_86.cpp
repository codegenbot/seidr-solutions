#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

string anti_shuffle(string s){
    string result = "";
    string word = "";
    for(char c : s){
        if(c == ' '){
            sort(word.begin(), word.end());
            result += word + " ";
            word = "";
        } else {
            word += c;
        }
    }
    sort(word.begin(), word.end());
    result += word;
    return result;
}

int main(){
    string input;
    getline(cin, input);
    cout << anti_shuffle(input) << endl;
    return 0;
}