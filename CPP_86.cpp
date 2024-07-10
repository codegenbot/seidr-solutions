#include <algorithm>
#include <cassert>
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
            vector<char> temp(word.begin(), word.end());
            sort(temp.begin(), temp.end());
            string sortWord;
            for (char c : temp) {
                sortWord += c;
            }
            result = result + sortWord;
            i = j - 1;
        }
    }
    return result;
}

int main() {
    assert(anti_shuffle("Hi. My name is Mister Robot. How are you?") == ".Hi My aemn is Meirst .Rboot How aer ?ouy");
    return 0;
}