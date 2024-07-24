#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b){
    return a == b;
}

vector<string> numerical_letter_grade(vector<float> grades) {
    // Existing code for grading calculation
}

int main() {
    assert(issame(numerical_letter_grade({0, 0.7}), {"E", "D-"}));
    // Additional test cases if needed
    return 0;
}