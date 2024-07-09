Here is the completed code:

```cpp
bool cycpattern_check(string a, string b) {
    for (int i = 0; i < a.length(); i++) {
        string temp = a.substr(i);
        if (temp.size() >= b.size()) {
            for (int j = 0; j <= temp.size() - b.size(); j++) {
                if (temp.substr(j, b.size()).compare(b) == 0) {
                    return true;
                }
            }
        } else {
            break;
        }
    }
    return false;
}