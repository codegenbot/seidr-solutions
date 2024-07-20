Here's the completed code:

```cpp
int is_bored(string S) {
    int boredoms = 0;
    string sentence;
    for (char c : S) {
        if (c == '.' || c == '?' || c == '!') {
            if (sentence.size() > 3 && sentence.substr(0, 2) == "I ")
                boredoms++;
            sentence.clear();
        } else {
            sentence += c;
        }
    }
    return boredoms;
}