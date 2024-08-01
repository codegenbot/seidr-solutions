```
bool issame(float x1, float y1, float x2, float y2) {
    if (abs(x1 - x2) < 0.00001 && abs(y1 - y2) < 0.00001)
        return true;
    else
        return false;
}

int main() {
    vector<float> grades = {4.5, 3.8, 3.9, 2.7};
    vector<string> result = numerical_letter_grade(grades);
    for (string grade : result) {
        cout << grade << endl;
    }
    return 0;
}

vector<string> numerical_letter_grade(vector<float> grades) {
    vector<string> result;
    for (float grade : grades) {
        string letterGrade = "";
        if (grade >= 4.0)
            letterGrade = "A+";
        else if (grade > 3.7)
            letterGrade = "A";
        else if (grade > 3.3)
            letterGrade = "A-";
        else if (grade > 3.0)
            letterGrade = "B+");
        else if (grade > 2.7)
            letterGrade = "B";
        else if (grade > 2.3)
            letterGrade = "B-";
        else if (grade > 2.0)
            letterGrade = "C+";
        else if (grade > 1.7)
            letterGrade = "C";
        else if (grade > 1.3)
            letterGrade = "C-";
        else if (grade > 1.0)
            letterGrade = "D+";
        else if (grade > 0.7)
            letterGrade = "D";
        else
            letterGrade = "E";
        result.push_back(letterGrade);
    }
    return result;
}