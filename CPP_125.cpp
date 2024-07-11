Here is the completed code:

```cpp
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
    if (txt.find(',') == string::npos) {
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
    } else {
        result.push_back(txt);
    }
    return result;
}