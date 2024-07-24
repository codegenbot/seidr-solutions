```cpp
string anti_shuffle(string s) {
    string result = "";
    for (int i = 0; i < s.length(); i++) {
        char temp = s[i];
        int count = 1;
        for (int j = i + 1; j <= s.length() - 1; j++) {
            if (s[j] <= temp) {
                temp = s[j];
                count++;
            } else {
                break;
            }
        }
        for (int k = 0; k < count; k++) {
            result += temp;
        }
    }
    return result;
}