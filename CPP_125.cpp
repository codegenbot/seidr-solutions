```
int main() {
    std::string input;
    split_words(input);
    assert(split_words("") == std::vector<std::string>{"0"});
}
```