#include <string>

using namespace std;

string anti_shuffle(const string& str) {
    string result = "";
    int start = 0;
    for(int i = 0; i < str.size(); i++) { 
        if(i > start && isalpha(str[i])) {
            result += str[i];
            start = i;
        }
    }
    return result;
}