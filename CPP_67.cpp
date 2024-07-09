#include <string>
#include <sstream>

using namespace std;

int fruit_distribution(string s, int n) {
    string word;
    int apples = 0, oranges = 0;

    stringstream ss(s);
    while (getline(ss, word, ' ')) {
        if (word.find("apples") != string::npos) {
            apples = stoi(word.substr(0, word.find("apples")));
        }
        else if (word.find("oranges") != string::npos) {
            oranges = stoi(word.substr(0, word.find("oranges")));
        }
    }

    return n - apples - oranges;
}