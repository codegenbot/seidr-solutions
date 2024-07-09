#include<stdio.h>
#include<string>
#include<algorithm>
using namespace std;

string get_closest_vowel(string word) {
    int n = word.size();
    for(int i=n-1; i>=0; --i){
        if((word[i] >= 'a' && word[i] <= 'z') || (word[i] >= 'A' && word[i] <= 'Z'))
            for(int j=i+1; j<n; ++j){
                if((word[j] >= 'a' && word[j] <= 'z') || (word[j] >= 'A' && word[j] <= 'Z'))
                    return word.substr(i+1, j-i-1);
            }
    }
    return "";
}