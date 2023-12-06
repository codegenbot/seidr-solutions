#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool issame(const vector<string>& a, const vector<string>& b) {
    return a == b;
}

int main() {
    assert (issame(numerical_letter_grade({0, 0.7}) , {"E", "D-"}));
    return 0;
}