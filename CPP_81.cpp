int main() {
    vector<float> grades;
    cout << "Enter the grades (Press 'q' to quit):" << endl;

    while (true) {
        string s;
        getline(cin, s);
        if (s == "q") break;
        float grade;
        cin >> grade;
        grades.push_back(grade);
        cin.ignore();
    }

    vector<string> letter_grades = numerical_letter_grade(grades);
    for (int i = 0; i < letter_grades.size(); ++i) {
        cout << "Grade: " << letter_grades[i] << endl;
    }
    return 0;
}