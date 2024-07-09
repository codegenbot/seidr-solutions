#include <algorithm>
#include <sstream>

using namespace std;

string anti_shuffle(string s) {
    istringstream iss(s);
    string word;
    string result = "";

    while (getline(iss, word, ' ')) {
        string temp = "";
        for (char c : word) {
            temp += (temp.empty() ? "" : " ") + c;
        }
        result += temp;
    }

    return result;
}