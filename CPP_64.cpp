Here is the completed code:

```cpp
int vowels_count(string s) {
    int count = 0;
    for (char c : s) {
        switch (tolower(c)) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                if (c == 'y' && s.back() != 'y') continue; // 'y' is not a vowel at the start
                count++;
                break;
        }
    }
    return count;
}