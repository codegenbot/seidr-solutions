#include <iostream>
#include <algorithm>
#include <vector>
#include <string> 
#include <sstream>

using namespace std;

string anti_shuffle(string sStr) {
    stringstream ss;
    string word;
    for (char c : sStr) {
        if (c == ' ') {
            ss << word << " ";
            word = "";
        } else {
            word += c;
        }
    }
    ss << word;

    string result;
    while(getline(ss, word)) {
        sort(word.begin(), word.end());
        result += word + " ";
    }

    return result.substr(0, result.length() - 1); 
}

int main() {
    string sStr = "Hi. My name is Mister Robot. How are you?";
    cout << anti_shuffle(sStr) << endl;
    return 0;
}