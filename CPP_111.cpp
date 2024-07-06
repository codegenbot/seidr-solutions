#include<string>
#include<map>
using namespace std;

map<char, int> histogram(string test) {
    map<char, int> result;
    for (string word : split(test)) {
        for (char c : word) {
            if (result.count(c))
                result[c]++;
            else
                result[c] = 1;
        }
    }
    return max_element(result.begin(), result.end(), [](pair<char, int>& a, pair<char, int>& b) {
        return a.second < b.second;
    });
}

vector<string> split(string test) {
    vector<string> words;
    string word = "";
    for (char c : test) {
        if (c == ' ')
            words.push_back(word), word = "";
        else
            word += c;
    }
    if (!word.empty())
        words.push_back(word);
    return words;
}