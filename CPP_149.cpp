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
    std::vector<std::vector<std::string>> lst = {{{"aaaa", "bbbb"}, {"dd"}, {"cc"}}};
    assert(sorted_list_sum(lst) == 2);
    return 0;
}