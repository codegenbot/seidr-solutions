Here is the completed code:

```cpp
string fix_spaces(string text) {
    string result = "";
    for (int i = 0; i < text.length(); i++) {
        if (text[i] == ' ') {
            if (i > 0 && result.back() == ' ') {
                if (result.length() > 2 || i == text.length() - 1) {
                    result += "-";
                }
            } else {
                result += '_';
            }
        } else {
            result += text[i];
        }
    }
    return result;
}