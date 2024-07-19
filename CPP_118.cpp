#include <iostream>
#include <string>
using namespace std;

string get_closest_vowel(string word){
    string vowels = "aeiouAEIOU";
    int closest_distance = word.size();
    int closest_index = -1;
    
    for (int i = word.size() - 2; i > 0; i--) {
        if (vowels.find(word[i]) != string::npos) {
            for (int j = i + 1; j < word.size(); j++) {
                if (vowels.find(word[j]) == string::npos) {
                    int distance = j - i;
                    if (distance < closest_distance) {
                        closest_distance = distance;
                        closest_index = i;
                    }
                    break;
                }
            }
        }
    }
    
    return closest_index != -1 ? string(1, word[closest_index]) : "";
}

int main() {
    assert (get_closest_vowel("Above") == "o");
    return 0;
}