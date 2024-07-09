#include <string>
#include <cassert>
using namespace std;

string get_closest_vowel(string word);

string get_closest_vowel(string word){
    string vowels = "aeiouAEIOU";
    int n = word.size();
    for (int i = n-2; i > 0; --i) {
        if (vowels.find(word[i]) != string::npos && !isalpha(word[i-1]) && !isalpha(word[i+1])) {
            return string(1, word[i]);
        }
    }
    return "";
}

int main() {
    // Your main function code here
    return 0;
}