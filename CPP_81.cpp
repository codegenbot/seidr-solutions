#include <string>

bool issame(vector<string> a, vector<string> b);

vector<string> numerical_letter_grade(vector<float> grades);

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<string> numerical_letter_grade(vector<float> grades) {
    vector<string> letter_grades;
    for (float gpa : grades) {
        // Grade conditions as provided
    }
    return letter_grades;
}

int main() {
    // Main function entry point
    return 0;
}