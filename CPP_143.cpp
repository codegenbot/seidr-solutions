#include<string>
using namespace std;

string words_in_sentence(string sentence){
    string result = "";
    int n = sentence.size();
    for(int i=0; i<n; i++){
        if(i > 0) result += " ";
        string word = sentence.substr(i, n-i);
        bool isPrime = true;
        for(int j = 2; j*j <= stol(word); j++)
            if(stol(word) % j == 0)
                isPrime = false;
        if(isPrime) result += word;
    }
    return result;
}