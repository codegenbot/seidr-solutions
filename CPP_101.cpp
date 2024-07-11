bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

int main() {
    assert(issame(words("ahmed     , gamal"), {"ahmed", "gamal"}));
}