#include <string>
#include <map>
using namespace std;

map<char, int> histogram(string test) {
    map<char, int> result;
    string temp = "";
    
    for (int i = 0; i < test.length(); i++) {
        if (test[i] == ' ') {
            if (!temp.empty()) {
                if (result.find(temp[0]) == result.end() || result[temp[0]] == 1) {
                    result[temp[0]] = 2;
                } else {
                    result[temp[0]]++;
                }
                temp = "";
            }
        } else {
            temp += test[i];
        }
    }
    
    if (!temp.empty()) {
        if (result.find(temp[0]) == result.end() || result[temp[0]] == 1) {
            result[temp[0]] = 2;
        } else {
            result[temp[0]]++;
        }
    }
    
    return result;
}