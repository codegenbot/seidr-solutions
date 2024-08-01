bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

int main() {
    auto grades = numerical_letter_grade({0, 0.7f});
    assert(issame(grades, {"E", "D-"}));
    return 0;
}