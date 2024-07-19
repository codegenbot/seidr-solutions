#include <vector>
#include <string>
#include <iostream>

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
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        string s;
        cin >> s;
        words.push_back(s);
    }
    cout << find_max(words) << endl;
}