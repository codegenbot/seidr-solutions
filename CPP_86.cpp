#include <algorithm>
#include <sstream>

using namespace std;

string anti_shuffle(string s) {
    istringstream iss(s);
    string word;
    string result = "";

    while (iss >> word) {
        string newWord = "";
        for (char c : word) {
            newWord += (char)(c);
        }
        result += newWord + " ";
    }

    return result.substr(0, result.length() - 1); // remove trailing space
}