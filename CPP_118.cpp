Here is the completed code:

```cpp
string get_closest_vowel(string word){
    int i = word.size() - 1;
    while (i > 0 && !isVowel(word[i])){
        i--;
    }
    if(i == 0) return "";
    for(int j = i-1; j >= 0 ;j--){
        if(!isVowel(word[j])) break;
        i = j;
    }
    return word.substr(i, 1);
}
bool isVowel(char c){
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}