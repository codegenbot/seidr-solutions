int main() {
    std::vector<float> testGrades = {0.7};
    assert(issame(numerical_letter_grade(testGrades), {"E", "D-" })); 
    return 0;
}