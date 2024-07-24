#include <vector>
#include <algorithm>
#include <string>
#include <initializer_list>
#include <iostream>

using namespace std;

string find_max(vector<string> words){
    string max_word = *max_element(words.begin(), words.end(),
        [](const string& a, const string& b) {
            if (a.length() == b.length()) {
                return a < b;
            }
            return a.length() > b.length();
        });
    for (string word : words) {
        if (word.length() == max_word.length() && 
            count(word.begin(), word.end(), '#') > 0) {
            max_word = word;
            break;
        }
    }
    return max_word;

}

int main() {
    vector<string> words = {"play", "play", "play"};
    string result = find_max(words);
    cout << result << endl;
    return 0;
}