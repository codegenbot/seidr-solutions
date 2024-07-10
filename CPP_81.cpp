```cpp
int main() {
    int n;
    std::cout << "Enter the number of grades: ";
    std::cin >> n;

    std::vector<float> grades(n);
    for (int i = 0; i < n; i++) {
        std::cout << "Enter grade " << i + 1 << ": ";
        std::cin >> grades[i];
    }

    std::vector<std::string> letterGrades = numerical_letter_grade(grades);

    std::cout << "Letter Grades: ";
    for (const auto& letter : letterGrades) {
        std::cout << letter << " ";
    }
    std::cout << std::endl;

    return 0;
}