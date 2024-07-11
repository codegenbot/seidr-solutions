std::vector<std::string> numerical_letter_grade(std::vector<float> grades) {
    std::vector<std::string> letter_grades;

    for (const auto& grade : grades) {
        if (grade >= 90.0)
            letter_grades.push_back("A");
        else if (grade >= 80.0)
            letter_grades.push_back("B");
        else if (grade >= 70.0)
            letter_grades.push_back("C");
        else if (grade >= 60.0)
            letter_grades.push_back("D");
        else
            letter_grades.push_back("F");
    }

    return letter_grades;
}