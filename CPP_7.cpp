bool issame(vector<string>, vector<string>);
vector<string> filter_by_substring(vector<string>, string);

int main() {
    assert(issame(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run"), {"grunt", "prune"}));
    return 0;
}