```
#include <iostream>
#include <string>
#include <cctype>

using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

string words_in_sentence(string sentence){
    string result = "";
    for(int i=0; i<sentence.size(); i++){
        if(i > 0) result += " ";
        int len = 0;
        for(int j=i; j<sentence.size() && isalpha(sentence[j]); j++) {
            len++;
            i = j;
        }
        if(isPrime(len)) result += sentence.substr(i, len);
    }
    return result;
}

int main(){
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence);
    cout << words_in_sentence(sentence) << endl;
    return 0;
}