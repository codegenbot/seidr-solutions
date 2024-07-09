#include <algorithm>
using namespace std;

string anti_shuffle(string s) {
    string result = "";
    string temp = "";
    
    for (char c : s) {
        if (c == ' ') {
            result += temp;
            temp = "";
            result += ' ';
        } else {
            temp += c;
        }
    }
    result += temp;

    for (int i = 0; i < result.length(); i++) {
        char ch = result[i];
        int j = i + 1;
        while (j < result.length() && result[j] <= ch) {
            j++;
        }
        swap(result[i], result[j - 1]);
    }

    return result;
}