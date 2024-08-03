#include <iostream>
#include <string>

bool isPrime(int n){
    if(n <= 1) return false;
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0) return false;
    }
    return true;

int main() {
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence);

    string result = "";
    int len = 0;
    for(int i = 0; i < sentence.size(); i++){
        if(sentence[i] == ' '){
            if(isPrime(len)) result += sentence.substr(len - (i + 1), i - len) + " ";
            len = 0;
        }else{
            len++;
        }
    }
    if(isPrime(len)) result += sentence.substr(len - len, len);
    cout << "Words in the sentence: " << result << endl;

    return 0;
}