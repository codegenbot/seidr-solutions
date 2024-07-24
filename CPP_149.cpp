```cpp
bool issame(vector<string> a, vector<string> b) {
    return (a.size() == 1 && a[0] == b[0]);
}

int sorted_list_sum(std::vector<std::vector<std::string>> lst) {
    int sum = 0;
    for (auto& inner : lst) {
        if (inner.size() == 1 && issame(inner, {"cc", "dd", "aaaa", "bbbb"})) {
            sum++;
        }
    }
    return sum;
}

int main() {
    assert(sorted_list_sum({{{"aaaa", "bbbb"}, {"dd"}, {"cc"}}}) == 2);
    int result = sorted_list_sum({{"aaaa", "bbbb"}, {"dd"}, {"cc"}});
    if (result != 1) {
        return 1;
    }
    bool checkResult = issame({"cc","dd","aaaa","bbbb"}, {"cc", "dd", "aaaa", "bbbb"});
    if (!checkResult) {
        return 2;
    }
    std::cout << result << std::endl;
    return 0;
}