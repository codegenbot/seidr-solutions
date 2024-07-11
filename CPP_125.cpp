Here is the completed code:

```cpp
vector<string> split_words(string txt) {
    vector<string> result;
    size_t pos = 0;

    while ((pos = txt.find(' ')) != string::npos) {
        result.push_back(txt.substr(0, pos));
        txt.erase(0, pos + 1);
    }

    if (txt.empty()) return result;

    result.push_back(txt);

    else {
        size_t commaPos = 0;
        while ((commaPos = txt.find(',')) != string::npos) {
            result.push_back(txt.substr(0, commaPos));
            txt.erase(0, commaPos + 1);
        }

        if (!txt.empty()) {
            int count = 0;
            for (char c : txt) {
                if (c >= 'a' && c <= 'z') {
                    if ((count % 2) == 1) return {to_string(count)};
                }
                count++;
            }
        }
    }

    return result;
}