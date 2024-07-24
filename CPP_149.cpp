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
    std::vector<std::vector<std::string>> lst = {{{"aaaa", "bbbb"}}, {{"dd"}}, {{"cc"}}};
    int result = sorted_list_sum(lst);
    return 0;
}