```cpp
int count_upper(const std::string& input) {
    int count = 0;
    for (int i = 0; i < input.length(); ++i) {
        if(i % 2 == 0 && isupper((char)input[i])) {
            count++;
        }
    }
    return count;
}