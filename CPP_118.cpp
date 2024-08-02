Here is the solution:

```cpp
#include<stdio.h>
#include<string>
#include<algorithm>
using namespace std;

string get_closest_vowel(string word) {
    for(int i = word.size() - 1; i > 0; --i) {
        if(vowels.find(word[i]) != string::npos) {
            for(int j = i - 1; j >= 0; --j) {
                if(!vowels.find(word[j])) {
                    return string(1, word[i]);
                }
            }
        }
    }
    return "";
}

const string vowels("aeiouAEIOU");