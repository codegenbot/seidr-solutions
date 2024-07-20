#include <algorithm>
using namespace std;

string anti_shuffle(string s) {
    string result = "";
    for (const auto& word : split(s, ' ')) {
        result += anti_sort(word) + " ";
    }
    return result.substr(0, result.size() - 1);
}

string anti_sort(const string& str) {
    string result = "";
    for (char c : str) {
        if (find_first_not_of(result, c) != string::npos)
            result += c;
    }
    return result;
}