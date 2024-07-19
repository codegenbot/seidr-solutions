```cpp
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
    string word;

    cout << "Enter the words (enter 'stop' to finish):" << endl;

    while (true) {
        cin >> word;

        if (word == "stop") {
            break;
        }

        words.push_back(word);
    }

    cout << find_max(words) << endl;

    return 0;
}