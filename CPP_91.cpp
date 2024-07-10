Here is the completed code:

```cpp
int is_bored(string S) {
    int count = 0;
    string sentence;
    for (char c : S) {
        if (c == '.' || c == '?' || c == '!') {
            if (sentence.find("I") != string::npos)
                count++;
            sentence = "";
        } else {
            sentence += c;
        }
    }
    return count;
}