#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int count_distinct_characters(string str) {
    vector<char> charSet;
    
    for (char c : str) {
        if (c >= 'a' && c <= 'z') {
            charSet.push_back(tolower(c));
        } else if (c >= 'A' && c <= 'Z') {
            bool found = false;
            for (char d : charSet) {
                if (d == tolower(c)) {
                    found = true;
                    break;
                }
            }
            if (!found) {
                charSet.push_back(tolower(c));
            }
        }
    }
    
    return charSet.size();
}