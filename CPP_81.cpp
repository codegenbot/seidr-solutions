int main() {
    std::vector<float> grades = {0, 0.7};
    assert(checkIfSame(numerical_letter_grade(grades), {"E", "D-"}) );
    return 0;
}