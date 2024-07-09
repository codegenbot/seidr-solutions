#include <string>
#include <vector>

using namespace std;

int fruit_distribution(string s, int n) {
    vector<string> words = split(s, ' ');
    int total_apples = 0;
    for (int i = 0; i < words.size(); i++) {
        if (words[i].find("apples") != string::npos) {
            total_apples = stoi(words[i - 1]) + total_apples;
            break;
        }
    }

    int total_oranges = 0;
    for (int i = 0; i < words.size(); i++) {
        if (words[i].find("oranges") != string::npos) {
            total_oranges = stoi(words[i - 1]) + total_oranges;
            break;
        }
    }

    return n - total_apples - total_oranges;
}

vector<string> split(const string& str, char delim) {
    vector<string> tokens;
    size_t prev = 0, pos = 0;
    do {
        pos = str.find(delim, prev);
        if (pos == string::npos) pos = str.length();
        string token = str.substr(prev, pos - prev);
        if (!token.empty()) tokens.push_back(token);
        prev = pos + 1;
    } while (pos < str.length());
    return tokens;
}