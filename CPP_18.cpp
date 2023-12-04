```
int main() {
    assert (how_many_times("john doe", "john") == 1);
}

int how_many_times(const string& str, const string& substring) {
    int count = 0;
    for (size_t i = 0; i <= str.length() - substring.length(); ++i) {
        if (str.substr(i, substring.length()) == substring) {
            ++count;
        }
    }
    return count;
}
```