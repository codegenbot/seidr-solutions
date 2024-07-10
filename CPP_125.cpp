#include<iomanip>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

vector<string> split_words(string txt) {
    vector<string> result;
    size_t pos = 0;
    while ((pos = txt.find(' ')) != string::npos) {
        result.push_back(txt.substr(0, pos));
        txt.erase(0, pos + 1);
    }
    if (txt.empty()) {
        return result;
    }
    for (char& c : txt) {
        if (!isalpha(c) || tolower(c) < 'a' || tolower(c) > 'z') {
            break;
        }
    }
    if (txt.size() % 2 == 1) {
        result.push_back(to_string(txt.size()));
    } else {
        result.push_back({"");
    }
    return result;
}