int main() {
    float grade1, grade2;
    std::cout << "Enter the first grade: ";
    std::cin >> grade1;
    std::cout << "Enter the second grade: ";
    std::cin >> grade2;
    std::vector<float> grades = {grade1, grade2};
    std::vector<std::string> result = numerical_letter_grade({grade1, grade2});
    
    if (!(result == std::vector<std::string>({"E", "D+"}))) {
        assert(false);
    }
}