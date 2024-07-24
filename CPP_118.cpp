#include<string>
#include<algorithm>
using namespace std;

string get_closest_vowel(string word) {
    string vowels = "aeiouAEIOU";
    for(int i = word.size() - 2; i >= 1; i--) {
        if (vowels.find(word[i]) != string::npos) {
            return word.substr(i, 1);
        }
    }
    return "";
}