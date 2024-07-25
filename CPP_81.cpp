#include <vector>
#include <string>

bool issame(const vector<string> &a, const vector<string> &b) {
    return a == b;
}

int main() {
    vector<float> grades = {3.5, 4.0, 2.8};
    vector<string> result = numerical_letter_grade(grades);
    for (const auto &grade : result) {
        cout << grade << " ";
    }
    return 0;
}