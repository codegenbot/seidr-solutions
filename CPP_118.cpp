#include <algorithm>
using namespace std;

string get_closest_vowel(string word) {
    string vowels = "aeiouAEIOU";
    for (int i = word.size() - 1; i > 0; --i) {
        if (vowels.find(word[i]) != string::npos) {
            int left = 0;
            while (left < i && !vowels.find(word[left])) {
                ++left;
            }
            if (left == i) return "";
            return word.substr(left, i - left);
        }
    }
    return "";
}