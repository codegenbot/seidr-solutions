std::vector<float> numerical_letter_grade(std::vector<float> grades) {
    std::vector<float> letterGrades = {};
    for (float grade : grades) {
        if (grade >= 4.0)
            letterGrades.push_back(4.3);
        else if (grade > 3.7)
            letterGrades.push_back(4.0);
        else if (grade > 3.3)
            letterGrades.push_back(3.7);
        else if (grade > 3.0)
            letterGrades.push_back(3.3);
        else if (grade > 2.7)
            letterGrades.push_back(3.0);
        else if (grade > 2.3)
            letterGrades.push_back(2.7);
        else if (grade > 2.0)
            letterGrades.push_back(2.3);
        else if (grade > 1.7)
            letterGrades.push_back(2.0);
        else if (grade > 1.3)
            letterGrades.push_back(1.7);
        else if (grade > 1.0)
            letterGrades.push_back(1.3);
        else
            letterGrades.push_back(1.0);
    }
    return letterGrades;
}