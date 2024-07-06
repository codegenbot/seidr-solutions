bool areEqual(vector<string> a, vector<string> b) {
    return a == b;
}

int main() {
    assert(areEqual(sorted_list_sum({"aaaa", "bbbb", "dd", "cc"}), {"ccc", "dd", "aaaa", "bbbb"}));
    return 0;
}