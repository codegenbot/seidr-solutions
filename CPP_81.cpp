#include <vector>
#include <string>

bool issame(const vector<string> &a, const vector<string> &b){
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

int main() {
    vector<float> grades = {3.8, 2.5, 4.0, 1.9};
    vector<string> result = numerical_letter_grade(grades);
    return 0;
}