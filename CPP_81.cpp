int main() {
    vector<float> grades = {3.8, 2.5};
    assert(same(numerical_letter_grade(grades), {"A", "C-" }));
    return 0;
}