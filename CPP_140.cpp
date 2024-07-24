Here is the solution:

```cpp
string fix_spaces(string text) {
    string result = "";
    for (int i = 0; i < text.length(); i++) {
        if (text[i] == ' ') {
            if (result.length() > 0 && result[result.length()-1] != ' ') {
                result += "_";
            }
            else if (i + 1 < text.length() && text[i+1] == ' ') {
                int count = 0;
                while (i + 1 < text.length() && text[i+1] == ' ') {
                    i++;
                    count++;
                }
                if (count > 2) {
                    result += "-";
                } else {
                    for (int j = 0; j < count; j++) {
                        result += "_";
                    }
                }
            }
        } else {
            result += text[i];
        }
    }
    return result;
}