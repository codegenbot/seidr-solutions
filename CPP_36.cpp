```cpp
int fizz_buzz(int n) {
    int count = 0;
    for (int i = 1; i < n; i++) {
        std::string s = std::to_string(i);
        if ((i % 11 == 0 || i % 13 == 0) && s.find('7') != std::string::npos)
            count++;
    }
    return count;
}