#include <vector>
#include <string>

using namespace std;

vector<string> split_words(string txt) {
    vector<string> result;
    size_t pos = 0, prev_pos = 0;

    while (true) {
        pos = txt.find(' ', prev_pos);
        if (pos == string::npos) {
            if (txt.find(',', prev_pos) != string::npos) {
                pos = txt.find(',', prev_pos);
            } else {
                int count = 0;
                for (char c : txt.substr(prev_pos)) {
                    if (c >= 'a' && c <= 'z') {
                        if ((count + (int)c - (int)'a') % 2 == 1) {
                            result.push_back(to_string(count));
                            return result;
                        }
                        count++;
                    } else {
                        break;
                    }
                }
            }
        }
        if (pos != string::npos) {
            result.emplace_back(txt.substr(prev_pos, pos - prev_pos));
            prev_pos = pos + 1;
        } else {
            result.push_back(txt.substr(prev_pos));
            return result;
        }
    }
}