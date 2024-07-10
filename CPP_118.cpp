Here is the completed code:

```cpp
string get_closest_vowel(string word) {
    int n = word.length();
    for(int i=n-1; i>=1; i--){
        if(word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || 
           word[i] == 'o' || word[i] == 'u' || word[i] == 'A' || 
           word[i] == 'E' || word[i] == 'I' || word[i] == 'O' || 
           word[i] == 'U'){
            for(int j=i-1; j>=0; j--){
                if(word[j] != 'a' && word[j] != 'e' && word[j] != 'i' &&
                   word[j] != 'o' && word[j] != 'u' && word[j] != 'A' &&
                   word[j] != 'E' && word[j] != 'I' && word[j] != 'O' &&
                   word[j] != 'U'){
                    return string(1, word[i]);
                }
            }
        }
    }
    return "";
}