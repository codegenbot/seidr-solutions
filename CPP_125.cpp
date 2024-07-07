#include<stdio.h>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

vector<string> split_words(string txt){
    vector<string> result;
    
    size_t pos = 0;
    while ((pos = txt.find_first_of(" ,")) != string::npos) {
        if (pos == 0) {
            if (txt.find(',') != string::npos) {
                string temp = txt.substr(0, txt.find(','));
                result.push_back(temp);
                txt.erase(0, txt.find(',') + 1);
            } else {
                result.push_back(txt.substr(0, pos));
                txt.erase(0, pos);
            }
        } else {
            if (pos == txt.length() - 1) {
                if (txt[pos] == ',') {
                    string temp = txt.substr(0, pos + 1);
                    result.push_back(temp);
                    txt.clear();
                } else {
                    result.push_back(txt.substr(0, pos));
                    txt.clear();
                }
            } else {
                result.push_back(txt.substr(0, pos));
                txt.erase(0, pos);
            }
        }
    }
    
    if (txt.length() > 0) {
        size_t count = 0;
        for (char c : txt) {
            if ((int)c >= 97 && (int)c <= 122) {
                if (count % 2 == 1) {
                    result.push_back(to_string(count));
                    break;
                }
                count++;
            } else {
                count = 0;
            }
        }
    }
    
    return result;
}