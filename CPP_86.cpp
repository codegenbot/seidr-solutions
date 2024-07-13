#include<string>
#include<algorithm>
using namespace std;

string anti_shuffle(string s) {
    string result = "";
    size_t pos = 0;
    
    while (pos < s.length()) {
        size_t nextSpace = s.find(' ', pos);
        
        if (nextSpace == string::npos) {
            result += s.substr(pos);
            break;
        }
        
        string word = s.substr(pos, nextSpace - pos);
        sort(word.begin(), word.end());
        result += word + " ";
        pos = nextSpace + 1;
    }
    
    return result;
}