bool issame(vector<string> a, vector<string> b); // Function declaration

vector<string> filter_by_substring(vector<string> strings, string substring);

bool issame(vector<string> a, vector<string> b){ // Function definition
    return a == b;
}

int main() {
    assert(issame(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run"), {"grunt", "prune"}));
    return 0;
}