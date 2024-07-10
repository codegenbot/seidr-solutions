#include<stdio.h>
#include<string>
using namespace std;

string words_in_sentence(string sentence){
    string result = "";
    int count = 0;
    for(int i=2; i<=10000; i++){
        bool isPrime = true;
        for(int j=2; j*j <= i; j++){
            if(i%j == 0){
                isPrime = false;
                break;
            }
        }
        if(isPrime){
            int wordLength = 0;
            string word;
            while(count < sentence.find(" ")){
                word += sentence[count];
                count++;
                wordLength++;
            }
            if(wordLength == i && !word.empty()){
                result += word + " ";
            }
            count++;
        }
    }
    return result.substr(0, result.size()-1);
}