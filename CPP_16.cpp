#include <string>
#include <algorithm>
using namespace std;

int count_distinct_characters(string str) {
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    vector<char> characters;
    for (char c : str) {
        if (find(c, characters) == characters.end()) {
            characters.push_back(c);
        }
    }
    return characters.size();
}

int find(char c, vector<char>& v) {
    for (auto it = v.begin(); it != v.end(); ++it) {
        if (*it == c) {
            return 0;
        }
    }
    return 1;
}