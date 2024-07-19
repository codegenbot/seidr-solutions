#include <vector>
#include <string>
#include <iostream>
#include <initializer_list>

using namespace std;

string find_max(vector<string> words) {
    string max_word = words[0];
    for (int i = 1; i < words.size(); i++) {
        if (words[i].size() > max_word.size()) {
            max_word = words[i];
        }
    }
    return max_word;
}

int main() {
    vector<string> words;
    string input;
    int result = 0;

    while (cin >> input) {
        words.push_back(input);
    }
    cout << find_max(words) << endl;
    return 0;
}