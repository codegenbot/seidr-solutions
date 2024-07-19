```cpp
int main() {
    std::vector<float> grades = {3.8f, 2.9f, 4.1f, 3.5f};
    std::vector<std::string> letterGrades = numerical_letter_grade(grades);

    for (const auto& grade : letterGrades) {
        std::cout << grade << " ";
    }
    return 0;
}