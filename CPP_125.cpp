#include<vector>
#include<string>
#include<algorithm>
using namespace std;

vector<string> split_words(string txt) {
    vector<string> result;
    size_t pos = 0, prevPos = 0;
    
    while ((pos = txt.find_first_of(" ,")) != string::npos) {
        if (pos == 0 || txt[pos - 1] == ' ') {
            result.push_back("");
            pos = txt.find_first_not_of(" ", pos);
        }
        if (pos > prevPos) {
            if (txt.substr(prevPos, pos - prevPos).find(',') != string::npos)
                break;
            result.push_back(txt.substr(prevPos, pos - prevPos));
        }
        prevPos = pos + 1;
    }
    
    if (result.size() == 0) {
        int count = 0;
        for (char c : txt) {
            if (c >= 'a' && c <= 'z' && (count % 2 != 0)) {
                count++;
            }
        }
        result.push_back(to_string(count));
    }
    
    return result;
}