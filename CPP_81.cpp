{
    vector<float> grades = {3.8, 2.9, 4.1};
    vector<string> result = numerical_letter_grade(grades);
    for (string grade : result) {
        cout << grade << endl;
    }
    return 0;
}