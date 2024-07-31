```cpp
int can_arrange(std::vector<std::string> input) {
    int count[10] = {0};
    for (const auto& str : input) {
        int num = std::stoi(str);
        if (num < 1 || num > 9)
            return -1;
        count[num - 1]++;
    }
    for (int i = 0; i < 9; i++) {
        if (count[i] != 1)
            return -1;
    }
    return 1;
}