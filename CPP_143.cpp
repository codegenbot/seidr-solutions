#include <string>
using namespace std;

string words_in_sentence(string sentence){
    string result = "";
    int count = 0;
    for(int i=2; i<=100; i++){
        if(isPrime(i)){
            while(sentence.find(" ") != -1 && isPrime(sentence.size())){
                int pos = sentence.find(" ");
                result += sentence.substr(0, pos) + " ";
                sentence.erase(0, pos+1);
            }
            if(!sentence.empty()){
                result += sentence + " ";
            }
        }
    }
    return result;
}

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}