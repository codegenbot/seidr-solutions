```cpp
#include <iostream>
#include <string>

bool isPrime(int n){
    if(n <= 1) return false;
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0) return false;
    }
    return true;

int main() {
    string words_in_sentence(string sentence){
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
        return result;
    }

    string input;
    cout << "Enter a sentence: ";
    getline(cin, input);

    string output = words_in_sentence(input);

    cout << "Output: " << output << endl;

    return 0;
}