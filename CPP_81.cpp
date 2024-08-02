bool issame(vector<string> v1, vector<string> v2) {
    if(v1.size() != v2.size())
        return false;
    for(int i = 0; i < v1.size(); i++) {
        if(v1[i] != v2[i])
            return false;
    }
    return true;
}

int main() {
    vector<string> letter_grades;
    float grade;
    cout << "Enter grades (enter -1 to stop): ";
    while(cin >> grade) {
        if(grade < 0)
            break;
        if (grade >= 4.0)
            letter_grades.push_back("A+");
        else if (grade > 3.7)
            letter_grades.push_back("A");
        else if (grade > 3.3)
            letter_grades.push_back("A-");
        else if (grade > 3.0)
            letter_grades.push_back("B+");
        else if (grade > 2.7)
            letter_grades.push_back("B");
        else if (grade > 2.3)
            letter_grades.push_back("B-");
        else if (grade > 2.0)
            letter_grades.push_back("C+");
        else if (grade > 1.7)
            letter_grades.push_back("C");
        else if (grade > 1.3)
            letter_grades.push_back("C-");
        else if (grade > 1.0)
            letter_grades.push_back("D+");
        else if (grade > 0.7)
            letter_grades.push_back("D");
        else
            letter_grades.push_back("E");
    }
    vector<string> expected_letter_grades = {"A+", "A", "B+", "C"};
    if(issame(letter_grades, expected_letter_grades))
        cout << "Letter grades are as expected.\n";
    else
        cout << "Letter grades do not match the expected ones.\n";
    return 0;
}