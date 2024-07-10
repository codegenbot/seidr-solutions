Here is the completed code:

```cpp
#include<stdio.h>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

vector<string> split_words(string txt) {
    vector<string> result;
    size_t pos = 0, prev_pos = 0;
    
    while (pos != string::npos) {
        if (txt.find(" ", pos) == string::npos && txt.find(",", pos) == string::npos) {
            int count = 0;
            for (char c : txt.substr(pos)) {
                if (c >= 'a' && c <= 'z') {
                    count++;
                    if ((count - 1) % 2 != 0) {
                        result.push_back(to_string(count));
                        return result;
                    }
                }
            }
        } else {
            pos = txt.find((txt.find(" ", pos) == string::npos ? " " : (txt.find(",", pos) == string::npos ? "," : "")), pos);
            if (pos != string::npos) {
                result.push_back(txt.substr(prev_pos, pos - prev_pos));
                prev_pos = pos + 1;
            } else {
                result.push_back(txt.substr(prev_pos));
                return result;
            }
        }
    }
    
    return result;
}