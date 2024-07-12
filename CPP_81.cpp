```cpp
#include <vector>
#include <string>

bool assertSame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return std::equal(a.begin(), a.end(), b.begin());
}

std::vector<std::string> numerical_letter_grade(std::vector<float> grades) {
    std::vector<std::string> result;
    for (float grade : grades) {
        if (grade >= 0.9)
            result.push_back("A");
        else if (grade >= 0.8)
            result.push_back("B");
        else if (grade >= 0.7)
            result.push_back(grade >= 0.8 ? "B" : "C+");
        else if (grade >= 0.6)
            result.push_back("C");
        else if (grade >= 0.5)
            result.push_back(grade >= 0.6 ? "C" : "D+");
        else if (grade >= 0.4)
            result.push_back("D");
        else
            result.push_back("F");
    }
    return result;
}

int main() {
    std::cout << "Enter the first grade: ";
    float grade1; std::cin >> grade1;
    std::cout << "Enter the second grade: ";
    float grade2; std::cin >> grade2;
    std::vector<float> grades = {grade1, grade2};
    std::vector<std::string> result = numerical_letter_grade({grade1, grade2});
    if (!assertSame(result, {"E", "C+"})) {
        assert(false);
    }
    return 0;
}