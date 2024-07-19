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
    
    for (int i = 0; i < grades.size(); ++i) {
        float avg = 0.0;
        int count = 1;
        bool same = false;
        for (int j = 0; j < i; ++j) {
            if (!isSame({grades[i]}, {grades[j]})) {
                same = true;
                break;
            }
            avg += grades[j];
            count++;
        }
        
        vector<float> temp = {grades[i]};
        while (!same) {
            for (int j = i + 1; j < grades.size(); ++j) {
                if (!isSame(temp, {grades[j]})) {
                    avg /= count;
                    cout << "Grade: A" << endl;
                    return 0;
                }
                temp.push_back(grades[j]);
                avg += grades[j];
                count++;
            }
        }
        
        vector<string> letter_grades = numerical_letter_grade({grades[i]});
        for (int k = 0; k < letter_grades.size(); ++k) {
            cout << "Grade: " << letter_grades[k] << endl;
        }
    }
    return 0;
}