#include<iomanip>
using namespace std;

vector<string> split_words(string txt) {
    vector<string> result;
    size_t pos = 0;
    while (pos < txt.size()) {
        if (isspace(txt[pos])) {
            pos++;
            continue;
        }
        size_t nextPos = txt.find_first_of(" ,", pos);
        string word = txt.substr(pos, nextPos - pos);
        if (nextPos == string::npos) {
            result.push_back(word);
            break;
        }
        pos = nextPos + 1;
        result.push_back(word);
    }
    if (result.empty()) {
        int count = 0;
        for (char c : txt) {
            if (c >= 'a' && c <= 'z') {
                if ((count & 1)) {
                    result.push_back(to_string(count));
                    break;
                }
                count++;
            }
        }
    }
    return result;
}