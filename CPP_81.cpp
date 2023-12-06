#include <iostream>
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

int main() {
    // Test case 1:
    assert (issame(numerical_letter_grade({0, 0.7}) , {"E", "D-"}));
    // Test case 2:
    assert (issame(numerical_letter_grade({3.5, 4.0}) , {"B+", "A+"}));
    return 0;
}