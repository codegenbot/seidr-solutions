vector<string> numerical_letter_grade(vector<float> grades){
    vector<string> results;
    for (float gpa : grades) {
        if (gpa == 4.0) results.push_back("A+");
        else if (gpa > 3.7) results.push_back("A");
        else if (gpa > 3.3) results.push_back("A-");
        else if (gpa > 3.0) results.push_back("B+");
        else if (gpa > 2.7) results.push_back("B");
        else if (gpa > 2.3) results.push_back("B-");
        else if (gpa > 2.0) results.push_back("C+");
        else if (gpa > 1.7) results.push_back("C");
        else if (gpa > 1.3) results.push_back("C-");
        else if (gpa > 1.0) results.push_back("D+");
        else if (gpa > 0.7) results.push_back("D");
        else if (gpa >= 0.0) results.push_back("D-");
        else results.push_back("E");
    }
    return results;
}