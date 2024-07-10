```cpp
#include <iostream>
#include <algorithm>
#include <vector>
#include <string> 
using namespace std;

string anti_shuffle(string sStr) {
    vector<string> words;
    string word;
    for (char c : sStr) {
        if (c == ' ') {
            words.push_back(word);
            word = "";
        } else {
            word += c;
        }
    }
    words.push_back(word);

    string result;
    for (string w : words) {
        sort(w.begin(), w.end());
        result += w;
    }

    return result;
}

int main() {
    string sStr = "Hi. My name is Mister Robot. How are you?";
    cout << anti_shuffle(sStr) << endl;
    return 0;
}