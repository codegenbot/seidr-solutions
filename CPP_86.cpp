```cpp
#include <iostream>
#include <algorithm>
#include <vector>
#include <cassert>
#include <string> 
using namespace std;

string anti_shuffle(string sStr) {
    string result = "";
    for (int i = 0; i < sStr.length(); i++) {
        if (sStr[i] == ' ') {
            result += " ";
        } else {
            string word;
            int j = i;
            while (j < sStr.length() && sStr[j] != ' ') {
                word += sStr[j];
                j++;
            }
            for (char c : word) {
                result += c;
            }
            std::sort(word.begin(), word.end());
            i = j - 1;
        }
    }
    return result;
}

int main() {
    string sStr = "Hi. My name is Mister Robot. How are you?";
    cout << anti_shuffle(sStr) << endl;
    return 0;
}