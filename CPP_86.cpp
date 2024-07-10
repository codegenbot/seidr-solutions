#include <iostream>
#include <algorithm>
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
                word += STr[j];
                j++;
            }
            for (char c : word) {
                bool seen[c-'a'+1]=false; 
                for (int k = 0, last = c; k <= c-'a'; k++) 
                    if (!seen[k]) last=k; else break;
                while(last-->=k--) seen[last]=true; 
                result+=c;
            }
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