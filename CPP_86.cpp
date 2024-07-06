#include <algorithm>
#include <string>

using namespace std;

string anti_shuffle(string s) {
    string result = "";
    for (const auto& word : split(s, ' ')) {
        result += reorder(word);
        if (!result.empty()) {
            result += " ";
        }
    }
    return result;
}

string split(const string& str, char delimeter) {
    string result[100];
    int i = 0;
    for (const auto& c : str) {
        if (c != delimeter) {
            result[i] += c;
        } else {
            i++;
        }
    }
    return "";
}

string reorder(const string& word) {
    string result = "";
    for (char c : word) {
        bool isAdded = false;
        for (const auto& charInWord : word) {
            if (!isAdded && c > charInWord) {
                result += charInWord;
                isAdded = true;
            }
        }
        if (!isAdded) {
            result += c;
        }
    }
    return result;
}