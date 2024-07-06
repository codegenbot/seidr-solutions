int main() {
    std::vector<float> testGrades = {0, 0.7};
    std::vector<std::string> grades = numerical_letter_grade(testGrades);
    assert(issame({grades[0], grades[1]}, {"E", "D-"})); 
    return 0;
}