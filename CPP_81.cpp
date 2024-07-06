int main() {
    std::vector<int> grades = {90, 70};
    std::vector<std::string> result = numerical_letter_grade(grades);
    std::vector<std::string> expected = {"A", "C"};
    assert(issame(result, expected));
    return 0;
}