bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

int main() {
    assert(issame({"Jupiter", "Makemake"}, {}));
    return 0;
}