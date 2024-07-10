#include <algorithm>
#include <vector>
#include <cassert> 
using namespace std;

int main() {
    assert(anti_shuffle("Hi. My name is Mister Robot. How are you?") == ".Hi My aemn is Meirst .Rboot How aer ?ouy");
    return 0;
}

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
            vector<char> temp(word.begin(), word.end());
            sort(temp.begin(), temp.end());
            for (char c : temp) {
                result += c;
            }
            i = j - 1;
        }
    }
    return result;