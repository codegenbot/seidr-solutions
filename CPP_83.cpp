```cpp
int starts_one_ends(int n) {
    int count = 0;
    for (int i = 1; i <= n; i++) {
        std::string str = std::to_string(i);
        if (str[0] == '1' || str.back() == '1') { 
            count++;
        }
    }
    return count;
}