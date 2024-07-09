Here is the completed code:

```cpp
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<string> split_words(string txt) {
    vector<string> result;
    size_t pos = 0;
    while ((pos = txt.find(' ')) != string::npos) {
        result.push_back(txt.substr(0, pos));
        txt.erase(0, pos + 1);
    }
    if (txt.empty()) return result;

    result.push_back(txt);

    for (char& c : txt) {
        if (c == ',') {
            size_t pos = txt.find(',');
            string temp = txt.substr(0, pos);
            result.clear();
            result.push_back(temp);
            txt.erase(0, pos + 1);
            return result;
        }
    }

    int count = 0;
    for (char c : txt) {
        if (c >= 'a' && c <= 'z') {
            count++;
            if ((count - 1) % 2 != 0) {
                vector<string> v;
                v.push_back(to_string(count));
                return v;
            }
        }
    }

    vector<string> v;
    v.push_back(to_string(txt.length()));
    return v;
}

int main() {
    string txt = "Hello world!";
    vector<string> result = split_words(txt);
    for (string s : result) {
        cout << s << endl;
    }
    return 0;
}