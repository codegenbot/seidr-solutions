#include <algorithm>
#include <sstream>

using namespace std;

string anti_shuffle(string s) {
    istringstream iss(s);
    string word;
    string result = "";

    while (iss >> word) {
        for (char c : word) {
            result += c;
        }
        for (int i = 0; i < word.length(); ++i) {
            if (i == 0)
                continue;
            char prev = word[i - 1];
            for (int j = i; j < word.length(); ++j) {
                if (word[j] <= prev) {
                    result += word[j];
                    word.erase(j, 1);
                    break;
                }
            }
        }
        result += " ";
    }

    return result.substr(0, result.size() - 1); // remove extra space at the end
}