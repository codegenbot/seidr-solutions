#include <iostream>
#include <string>
using namespace std;

bool isvowl(char c) {
    char vowels[] = {'a', 'e', 'i', 'o', 'u'};
    for (int i = 0; i < 5; i++) {
        if (c == tolower(vowels[i]))
            return true;
    }
    return false;
}

string get_closest_vowel(string word) {
    int min_index = -1;
    int min_distance = INT_MAX;
    
    for(int i=0; i<word.size(); ++i) {
        if(isvowl(word[i])) {
            int distance = abs(i-word.size()/2);
            if(distance < min_distance) {
                min_distance = distance;
                min_index = i;
            }
        }
    }
    
    return string(1, word[min_index]);
}

int main() {
    assert (get_closest_vowel("Above") == "o");
    cout << get_closest_vowel("Hello") << endl;
    return 0;
}