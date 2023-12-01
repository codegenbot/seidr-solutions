#include <string>
using namespace std;

int count_distinct_characters(string str) {
    vector<char> distinctCharacters;
    for (int i = 0; i < str.length(); i++) {
        char ch = tolower(str[i]);
        if (find(distinctCharacters.begin(), distinctCharacters.end(), ch) == distinctCharacters.end()) {
            distinctCharacters.push_back(ch);
        }
    }
    return distinctCharacters.size();
}