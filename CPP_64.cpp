Here is the completed code:

```cpp
int vowels_count(string s) {
    int count = 0;
    for (char c : s) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            (c == 'y' && !std::next_permutation(&s[0], &s+s.size()-1))) {
            count++;
        }
    }
    return count;
}