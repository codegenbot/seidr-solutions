```cpp
#include <string>
#include <vector>

bool issame(vector<string> a,vector<string>b){
    if(a==b) return true;
    else return false;
}

vector<string> split_words(string txt) {
    vector<string> result;
    size_t pos = 0, prev_pos = 0;

    while ((pos = txt.find_first_of(" ,")) != string::npos) {
        if (prev_pos == pos) {
            break;
        }
        if (txt.substr(prev_pos, pos - prev_pos).find_first_not_of(' ') == string::npos) {
            result.push_back(txt.substr(prev_pos, pos - prev_pos));
            prev_pos = pos + 1;
        } else {
            int count = 0;
            for (char c : txt.substr(prev_pos, pos - prev_pos)) {
                if (isalpha(c)) {
                    count++;
                }
            }
            result.push_back(to_string(count));
            break;
        }
    }

    if (prev_pos < txt.size()) {
        size_t start = prev_pos;
        while (start < txt.size() && !isalnum(txt[start])) {
            start++;
        }
        string word = txt.substr(start);
        int count = 0;
        for (char c : word) {
            if (isalpha(c)) {
                count++;
            }
        }
        result.push_back(to_string(count));
    }

    return result;
}