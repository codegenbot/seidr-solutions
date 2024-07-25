#include <string>
#include <algorithm>
using namespace std;

string get_closest_vowel(string word) {
    for(int i = word.length() - 1; i >= 0; i--) {
        if("aeiouAEIOU".find(word[i]) != string::npos) {
            for(int j = i - 1; j >= 0; j--) {
                if(("bcdfghjklmnpqrstvwxyzBCDFGHJKLMNPQRSTVWXYZ").find(word[j]) == string::npos) {
                    return(string(1, word[i]));
                }
            }
        }
    }
    return "";
}