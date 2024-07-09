Here is the completed code:

```cpp
vector<string> split_words(string txt) {
    string temp = "";
    vector<string> result;

    for (char c : txt) {
        if (isspace(c)) {
            if (!temp.empty()) {
                result.push_back(temp);
                temp = "";
            }
        } else if (c == ',') {
            if (!temp.empty()) {
                result.push_back(temp);
                temp = "";
            }
        } else {
            temp += c;
        }
    }

    if (!temp.empty()) {
        result.push_back(temp);
    } else {
        int count = 0;
        for (char c = 'a'; c <= 'z'; ++c) {
            if (islower(c)) {
                count++;
            }
            if (count % 2 == 1) {
                result.push_back(to_string(count));
                break;
            }
        }
    }

    return result;
}