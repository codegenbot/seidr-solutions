#include<string>
using namespace std;

string words_in_sentence(string sentence){
    string result = "";
    int count = 0;
    for(int i = 0; i < sentence.size(); i++){
        if(sentence[i] == ' '){
            count++;
        }else{
            if(count == 0) continue;
            bool isPrime = true;
            int length = i - count;
            for(int j = 2; j * j <= length; j++){
                if(length % j == 0){
                    isPrime = false;
                    break;
                }
            }
            if(isPrime) result += sentence.substr(count, length) + " ";
        }
    }
    return result;
}