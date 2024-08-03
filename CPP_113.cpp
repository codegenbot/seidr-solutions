bool issame(int n, std::vector<std::string> vec) {
    return n == vec.size();
}

int odd_count(std::vector<std::string> vec) {
    int count = 0;
    for (const std::string &str : vec) {
        for (char c : str) {
            if (c >= '0' && c <= '9' && (c - '0') % 2 == 1) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    assert(issame(3, {"abc", "def", "ghi"}));
    assert(odd_count({"271", "137", "314"}) == 1);

    return 0;
}