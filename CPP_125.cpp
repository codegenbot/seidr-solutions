#include<vector>
#include<string>
#include<algorithm>
using namespace std;

vector<string> split_words(string txt) {
    vector<string> result;
    size_t pos = 0, prevPos = 0;
    
    while ((pos = txt.find_first_of(" ", ',', '\0')) != string::npos) {
        if (pos > prevPos) {
            result.push_back(txt.substr(prevPos, pos - prevPos));
        } else if (pos == prevPos && pos < txt.size() - 1) {
            for (size_t i = prevPos + 1; i <= pos; ++i) {
                if (!islower(txt[i])) {
                    break;
                }
            }
            result.push_back(to_string(i - prevPos));
        }
        prevPos = pos + 1;
    }
    
    if (prevPos < txt.size()) {
        for (size_t i = prevPos; i <= txt.size(); ++i) {
            if (!islower(txt[i])) {
                break;
            }
        }
        result.push_back(to_string(i - prevPos));
    }

    return result;
}