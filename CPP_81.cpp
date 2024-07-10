int main() {
    int credits = 0;
    double gpa = 0.7;
    if (numerical_letter_grade(credits, gpa) != "E" && numerical_letter_grade(credits, gpa) != "D-") {
        assert(false);
    }
    return 0;
}