bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

int main() {
    assert(issame(numerical_letter_grade({0, 0.7}), {"E", "D-"}));
}