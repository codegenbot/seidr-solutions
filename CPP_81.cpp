#include <iostream>
#include <vector>
#include <string>

using namespace std;

int numerical_letter_grade(vector<double> grades) {
    if (grades[0] >= 3.7 && grades[1] >= 3.7)
        return 4;
    else if (grades[0] >= 3.3 && grades[1] >= 3.3)
        return 3;
    else if (grades[0] >= 2.9 && grades[1] >= 2.9)
        return 2;
    else if (grades[0] >= 2.5 && grades[1] >= 2.5)
        return 1;
    else
        return 0;

}

bool issame(const string& a, const string& b) {
    return a == b;
}

int main() {
    int num = numerical_letter_grade({0, 0.7});
    cout << "The two students have " << (issame(to_string(num), {"E", "D-"})) ? "" : "not" << " the same letter grade.\n";
    return 0;
}