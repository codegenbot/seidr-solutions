#include <vector>
#include <string>

bool issame(const vector<string> &a, const vector<string> &b) {
    return a == b;
}

int main() {
    vector<float> grades = {3.8, 2.5, 4.0};
    vector<string> result = numerical_letter_grade(grades);
    return 0;
}