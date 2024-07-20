bool issame(vector<string> a, vector<string> b);

int main() {
    assert(issame(bf("Jupiter", "Makemake"), {}));
}

bool issame(vector<string> a, vector<string> b) {
    // Your implementation of issame function
    return a == b;
}