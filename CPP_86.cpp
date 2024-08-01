#include <algorithm>
using namespace std;

string anti_shuffle(string s) {
    string result = "";
    size_t pos = 0;
    
    while (pos != string::npos) {
        pos = s.find(" ");
        if (pos == string::npos) {
            result += s;
            break;
        }
        
        string word = s.substr(0, pos);
        sort(word.begin(), word.end());
        result += word;
        s.erase(0, pos + 1);
    }
    
    return result;
}