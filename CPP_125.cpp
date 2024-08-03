#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<string> split_words(string txt) {
    vector<string> result;
    size_t start = 0;
    while (start < txt.size()) {
        if (isspace(txt[start])) {
            if (result.empty() || result.back().find(',') == string::npos) {
                break;
            }
            start++;
            continue;
        }
        size_t end = start;
        while (end < txt.size() && !isspace(txt[end]) && txt[end] != ',') {
            end++;
        }
        if (start == end) {
            int count = 0;
            for (char c : txt.substr(start)) {
                if (islower(c)) {
                    count += (c - 'a');
                }
            }
            result.push_back(to_string(count));
            break;
        }
        result.push_back(txt.substr(start, end - start));
        start = end;
    }
    return result;
}