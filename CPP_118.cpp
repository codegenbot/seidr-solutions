#include<string>
#include<cctype>

string get_closest_vowel(string word) {
    int left = 0, right = word.size() - 1;
    while (left < right) {
        if (!isvowel(word[left])) left++;
        else if (!isvowel(word[right])) right--;
        else return word.substr(left + 1, right - left - 1);
    }
    for(int i=0; i<word.size();i++){
        if(isvowel(tolower(word[i]))){
            return word.substr(i);
        }
    }
    return "";
}

bool isvowel(char c) {
    return tolower(c) == 'a' || tolower(c) == 'e' || tolower(c) == 'i' ||
           tolower(c) == 'o' || tolower(c) == 'u';
}