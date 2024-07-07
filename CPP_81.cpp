```cpp
#include <iostream>
#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return (a.size() == b.size()) && std::all_of(a.begin(), a.end(), [b](const auto& x) { return x == *(b.begin()); });
}

std::string letterGrade(float grade) {
    if (grade < 1.0)
        return "F";
    else if (grade >= 4.0)
        return "A+";
    else if (grade > 3.7)
        return "A";
    else if (grade > 3.3)
        return "A-";
    else if (grade > 3.0)
        return "B+";
    else if (grade > 2.7)
        return "B";
    else if (grade > 2.3)
        return "B-";
    else if (grade > 2.0)
        return "C+";
    else if (grade > 1.7)
        return "C";
    else if (grade > 1.3)
        return "C-";
    else if (grade > 1.0)
        return "D+";
    else if (grade > 0.7)
        return "D";
    else
        return "F";
}

std::vector<std::string> numericalLetterGrade(std::vector<float> grades) {
    std::vector<std::string> result(std::vector<std::string>::allocator_type());
    for (float grade : grades) {
        std::string letter = letterGrade(grade);
        result.emplace_back(letter); 
    }
    return result;
}

int main() {
    std::vector<float> fgrades;
    float grade;
    for (int i = 0; i < 2; i++) {
        std::cout << "Enter grade: ";
        std::cin >> grade;
        if (grade > 4.0 || grade < 0.0) {
            std::cerr << "Invalid grade. Please enter a value between 0 and 4." << std::endl;
            return 1; // Exit with error code
        }
        fgrades.push_back(grade);
    }

    std::vector<std::string> grades = numericalLetterGrade(fgrades);

    if (!issame({grades[0], grades[1]}, {"F", "F"}))
        std::cout << "Test failed" << std::endl;
    else
        std::cout << "Test passed" << std::endl;
    return 0;
}