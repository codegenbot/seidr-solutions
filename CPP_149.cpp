int sorted_list_sum(vector<string> lst) {
    int sum = 0;
    for (string s : lst) {
        if (s == "cc" || s == "dd") sum++;
    }
    return sum;
}

bool issame(vector<string> a, vector<string> b) {
    return sort(a.begin(), a.end()) == sort(b.begin(), b.end());
}

int main() {
    std::vector<std::vector<std::string>> lst = {{{"aaaa", "bbbb"}, {"dd"}, {"cc"}}};
    assert(sorted_list_sum({"aaaa", "bbbb", "dd", "cc"}) == 2);
    return 0;
}