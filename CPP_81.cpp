vector<string> numerical_letter_grade(vector<float> grades) {
    vector<string> letter_grades;
    for (float grade : grades) {
        string letter;
        if (grade >= 4.0)
            letter = "A+";
        else if (grade > 3.7)
            letter = "A";
        else if (grade > 3.3)
            letter = "A-";
        else if (grade > 3.0)
            letter = "B+";
        else if (grade > 2.7)
            letter = "B";
        else if (grade > 2.3)
            letter = "B-";
        else if (grade > 2.0)
            letter = "C+";
        else if (grade > 1.7)
            letter = "C";
        else if (grade > 1.3)
            letter = "C-";
        else if (grade > 1.0)
            letter = "D+";
        else if (grade > 0.7)
            letter = "D";
        else
            letter = "E";

        letter_grades.push_back(letter);
    }
    return letter_grades;
}