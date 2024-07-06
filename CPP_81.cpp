#include <vector>
#include <string>

double letterToGrade(char c) {
    switch (c) {
        case 'A':
            return 4.0;
        case 'B':
            return 3.0;
        case 'C':
            return 2.0;
        case 'D':
            return 1.0;
        case 'F':
            return 0.0;
    }
}

double numerical_letter_grade(vector<double> grades) {
    double total = 0.0;
    for (int i = 0; i < grades.size(); i++) {
        total += letterToGrade('A' - 65 + (grades[i] > 2.0)) * (grades[i] > 2.0 ? 4.0 : 1.0);
    }
    return total / grades.size();
}

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}