#include<string>
using namespace std;

string words_in_sentence(string sentence){
    string result = "";
    int i = 0;
    while(i < sentence.length()){
        int j = i+1;
        bool is_prime = true;
        while(j > 1 && is_prime){
            if(j % 2 == 0 || j % 3 == 0 || j % 5 == 0) is_prime = false;
            else j--;
        }
        if(is_prime){
            result += sentence.substr(i, j-i);
            i = j;
        }else{
            i++;
        }
    }
    return result;
}