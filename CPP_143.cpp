#include<string>
using namespace std;

string words_in_sentence(string sentence){
    string result = "";
    int len = 0;
    for(int i=2; ;i++){
        bool isPrime = true;
        for(int j=2;j*j<=i;j++) if(i%j==0) {isPrime = false;break;}
        if(isPrime){
            string word = sentence.substr(len, i);
            result += word + " ";
            len += i;
        }
    }
    return result.substr(0,result.length()-1);
}