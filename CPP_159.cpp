bool areEqual(vector<int> a, vector<int> b) {
    return a == b;
}

int program() {
    assert(areEqual(eat(4, 5, 1), {5, 0}));
    return 0;
}