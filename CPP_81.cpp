#include <initializer_list>
#include <vector>
#include <string>

bool compareVectors(vector<string> a, vector<string> b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i])
            return false;
    }
    return true;
}

string numericalLetterGrade(float grade) {
    if (grade >= 4.0)
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

vector<string> letterGrade(vector<float> grades) {
    vector<string> result;
    for (float grade : grades) {
        result.push_back(numericalLetterGrade(grade));
    }
    return result;
}

int mainFunction() {
    vector<float> fgrades = {0, 0.7};
    vector<string> grades = letterGrade(fgrades);
    if (!compareVectors({grades[0], grades[1]}, {"E", "D-" }))
        cout << "Test failed" << endl;
    else
        cout << "Test passed" << endl;
    return 0;
}